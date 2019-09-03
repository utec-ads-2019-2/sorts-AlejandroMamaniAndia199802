#ifndef BUBBLE_H
#define BUBBLE_H

#include "sort.h"
#include <algorithm>

class BubbleSort : public Sort {       
    public:
        BubbleSort(int *elements, size_t size) : Sort(elements, size) {}

        void execute () override
        {
            int tmp;
            bool swaped=false;
            for (int i=0; i<size; i++)
            {
                for (int j=1; j<size-i; j++)
                {
                    if (elements[j-1] > elements[j])
                    {
                        tmp = elements[j-1];
                        elements[j-1] = elements[j];
                        elements[j] = tmp;
                        swaped = true;
                    }
                }
                if (!swaped)
                {
                    break;
                } else {
                    swaped = false;
                }
            }
        }

        inline string name() { return "BubbleSort"; }
};

#endif