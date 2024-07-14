#pragma once
#include "Sorting.h"

namespace Algorithms{
	class MergeSort : public Sorting {

	public :
		virtual void Sort(std::vector<int>& list, const bool rev = false) abstract;
	
	protected:
		virtual void Merge(std::vector<int>& list, int left, int right, int mid ) abstract;
		virtual void Divide(std::vector<int>& list, int start, int end) abstract;

	};
}