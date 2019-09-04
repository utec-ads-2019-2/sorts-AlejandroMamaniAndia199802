#ifndef QUICK_H
#define QUICK_H

#include "sort.h"

class QuickSort : public Sort {
    public:
        QuickSort(int *elements, size_t size) : Sort(elements, size) { }

    void quickSort(int elements[], int l, int h)
    {
        if (l < h)
        {
            int p = partition(elements, l, h);
            quickSort(elements, l, p - 1);
            quickSort(elements, p + 1, h);
        }
    }
    int partition(int elements[], int l, int h)
    {
        int i=l-1;
        int pivot = elements[h];
        int temp;
        for (int j = l;j < h;j++)
        {
            if (elements[j] <= pivot)
            {
                i++;
                temp = elements[j];
                elements[j] = elements[i];
                elements[i] = temp;
            }
        }
        elements[h] = elements[i + 1];
        elements[i + 1] = pivot;
        return (i + 1);
    }
        void execute() override
        {
            quickSort(elements, 0, size-1);

        }

        inline string name() override { return "QuickSort"; }
};

#endif