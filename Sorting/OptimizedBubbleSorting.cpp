#include "OptimizedBubbleSorting.h"

void Algorithms::OptimizedBubbleSorting::Sort(std::vector<int>& list, bool rev) {
	for (int i = 0; (i < list.size()); i++) {
		bool isSwapped = false;
		for (int j = 0; j < list.size() - i - 1; j++) {
			if ((!rev && list[j] > list[j + 1]) || (rev && list[j] < list[j + 1])) {
				int temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
				isSwapped = true;
			}
		}
		if (!isSwapped) {
			return;
		}
	}
}