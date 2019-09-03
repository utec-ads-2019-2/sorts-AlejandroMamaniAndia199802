#ifndef SELECT_H
#define SELECT_H

#include "sort.h"

class SelectSort : public Sort {       
    public:
        SelectSort(int *elements, size_t size) : Sort(elements, size) {}

        void execute() override
        {
            int min_index = 0;
            int temp = 0;
            for (int i = 0;i < size;i++)
            {
                min_index = i;
                for (int j = i + 1;j < size;j++)
                {
                    if (elements[j] < elements[min_index])
                        min_index = j;
                }
                if (min_index != i)
                {
                    temp = elements[i];
                    elements[i] = elements[min_index];
                    elements[min_index] = temp;
                }
            }
        }

        inline string name() { return "SelectSort"; }
};

#endif