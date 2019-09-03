#ifndef SHELL_H
#define SHELL_H

#include "sort.h"

class ShellSort : public Sort {       
    public:
        ShellSort(int *elements, size_t size) : Sort(elements, size) {}

        void execute() override
        {
            int tmp, j;
            for (int k = size / 2; k > 0; k /= 2) {
                for (int i = k; i < size; i++) {
                    tmp = elements[i];
                    for (j = i; ((j - k) >= 0) && (tmp < elements[j - k]); j--) {
                        elements[j] = elements[j - k];
                    }
                    elements[j] = tmp;
                }
            }
        }

        inline string name() { return "ShellSort"; }
};

#endif