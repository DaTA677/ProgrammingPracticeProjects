#include "OutPlaceMergeSort.h"
#include <iostream>

void Algorithms::OutPlaceMergeSort::Sort(std::vector<int>& list, bool rev)
{
	if (rev) comparison = [](int a, int b) -> bool { return a > b; };
	else comparison = [](int a, int b)-> bool {return a < b; };

	Divide(list, 0, list.size()-1);

}

void Algorithms::OutPlaceMergeSort::Merge(std::vector<int>& list, int start, int end, int mid)
{
	if (start >= end) return;

	std::vector<int> left(mid-start+1);
	for (int i = start,j=0; i <= mid; i++) {
		left[j++]=list[i];
	}

	std::vector<int> right(end-mid);
	for (int i = mid+1,j=0; i <= end; i++) {
		right[j++]=(list[i]);
	}

	int i = 0, j = 0, k = start;

	while (i < left.size() && j < right.size()) {
		if (comparison(left[i], right[j])) {
			list[k++] = left[i++];
		}
		else if (left[i] == right[j]) {
			list[k++] = left[i++];
			list[k++] = right[j++];
		}
		else {
			list[k++] = right[j++];
		}
	}
	while (i < left.size()) {
		list[k++] = left[i++];
	}
	while (j < right.size()) {
		list[k++] = right[j++];
	}
}

void Algorithms::OutPlaceMergeSort::Divide(std::vector<int>& list, int start, int end)
{
	if (start >= end) return;

	int mid = (start + end) / 2;

	Divide(list, start, mid);
	Divide(list, mid+1, end);
	Merge(list, start, end, mid);

}
