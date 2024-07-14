#pragma once
#include "Sorting.h"

namespace Algorithms {
    class BubbleSorting :
        public Sorting
    {
    public:
        virtual void Sort(std::vector<int>& list, bool rev = false) override;
    };
}


