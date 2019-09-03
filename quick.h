#ifndef QUICK_H
#define QUICK_H

#include "sort.h"

class QuickSort : public Sort {
    public:
        QuickSort(int *elements, size_t size, int l, int e ) : Sort(elements, size) { l=l; e=e;}
        void execute() override
        {
        }

        inline string name() override { return "QuickSort"; }
};

#endif