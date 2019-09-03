#ifndef INSERT_H
#define INSERT_H

#include "sort.h"

class InsertSort : public Sort {       
    public:
        InsertSort(int *elements, size_t size) : Sort(elements, size) {}

        void execute()
        {
            int j;
            int temp;
            for (int i = 0;i < size;i++)
            {
                j = i;
                while (j>0 &&(elements[j]<elements[j-1]))
                {
                    temp = elements[j];
                    elements[j] = elements[j-1];
                    elements[j-1] = temp;
                    j--;
                }
            }
        }

        inline string name() { return "InsertSort"; }
};

#endif