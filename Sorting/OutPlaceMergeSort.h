#pragma once
#include "MergeSort.h"
#include <functional>

namespace Algorithms {

	class OutPlaceMergeSort : public MergeSort {
	public :
		virtual void Sort(std::vector<int>& list, bool rev = false) override ;

	protected:
		virtual void Merge(std::vector<int>& list, int start, int end, int mid) override;
		virtual void Divide(std::vector<int>& list, int start, int end)override;

	private:
		std::function<bool(int, int)> comparison;
	};
}
