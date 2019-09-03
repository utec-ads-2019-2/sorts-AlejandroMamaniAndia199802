#ifndef RADIX_H
#define RADIX_H

#include "sort.h"

class RadixSort : public Sort {       
    public:
        RadixSort(int *elements, size_t size) : Sort(elements, size) {}

        void execute() override
        {
            int n = 1;
            bool sorted = false;

            int largest = 0;
            for (int i = 0;i < size;i++) {
                if (elements[i] > largest) {
                    largest = elements[i];
                }
            }

            while(largest) {
                largest /= 10;
                vector<int> bucket(10, 0);
                vector<int> tmp_v(size, 0);

                for (int i=0; i<size; i++) {
                    bucket[ elements[i] / n % 10 ] += 1;
                }
                for (int i=1; i<bucket.size(); i++) {
                    bucket[i] += bucket[i-1];
                }
                for (int i=size-1; i>=0; --i) {
                    tmp_v[ --bucket[elements[i] / n % 10]] = elements[i];
                }
                for (int i=0; i<size; i++) {
                    elements[i] = tmp_v[i];
                }
                n *= 10;
            }
        }

        inline string name() override { return "RadixSort"; }
};

#endif