#include "BubbleSorting.h"

void Algorithms::BubbleSorting::Sort(std::vector<int>& list, bool rev)
{
	for (int i = 0; (i < list.size()); i++) {
		for (int j = 0; j < list.size() - i - 1 ; j++) {
			if ((!rev && list[j] > list[j + 1]) || (rev && list[j] < list[j + 1])) {
				int temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}
}
