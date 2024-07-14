#pragma once
#ifndef SORTING_HEADER
#include "Sorting.h"
#define SORTING_HEADER
#endif // !SORTING

namespace Algorithms {
	class OptimizedBubbleSorting :
		public Sorting {
		virtual void Sort(std::vector<int>& list, bool rev = false) override;
	};
}