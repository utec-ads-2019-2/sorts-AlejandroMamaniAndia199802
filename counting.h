#ifndef COUNTING_H
#define COUNTING_H

#include "sort.h"
#include <algorithm>
#include <vector>

class CountingSort : public Sort {       
    public:
        CountingSort(int *elements, size_t size) : Sort(elements, size) {}

        void execute() override
        {
            std::vector<int> bucket(size, 0);
            for (const int &i: bucket)
            {
                ++bucket[i];
            }
            for (int j=0, i=0; j<bucket.size(); j++)
            {
                while(bucket[j]-->0) {
                    elements[i++]=j;
                }
            }
        }

        inline string name() override { return "CountingSort"; }
};

#endif