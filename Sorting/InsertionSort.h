#pragma once
#include "Sorting.h"

namespace Algorithms{
	class InsertionSort : public Sorting {

	public :
		virtual void Sort(std::vector<int>& list, const bool rev = false) override;


	};
}