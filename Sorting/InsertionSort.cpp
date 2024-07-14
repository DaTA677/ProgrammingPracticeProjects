#include "InsertionSort.h"

void Algorithms::InsertionSort::Sort(std::vector<int>& list, const bool rev)
{
	for (int i = 1; i < list.size(); i++) {
		int key = list[i];
		int j = i - 1;

		while (j >= 0 && ((!rev && list[j] > key) || (rev && list[j] < key))) {
			list[j + 1] = list[j];
			j--;
		}
		list[j + 1] = key;
	}
}
