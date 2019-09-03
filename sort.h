#ifndef SORT_H
#define SORT_H

#include <algorithm>

using namespace std;

class Sort {
    protected:
        int *elements;
        size_t size;
        int l, e;
    public:
    Sort(int *elements, size_t size) : elements(elements), size(size) {}
    Sort(int *elements, size_t size, int l, int  e) : elements(elements), size(size), l{0}  {this->e = size-1;}  ;



    virtual void execute() = 0;

        virtual string name() = 0;
};

#endif