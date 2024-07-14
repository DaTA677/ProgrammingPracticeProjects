#include<iostream>
#include<algorithm>
#include "Sorting.h"
#include "BubbleSorting.h"
#include "OptimizedBubbleSorting.h"
#include "OutPlaceMergeSort.h"
#include "InsertionSort.h"

#include<chrono>

int SumOfMinMax(const std::vector<int> list) {
	if (list.size() == 0) return -1;
	int min = list[list.size() - 1];
	int max= list[list.size() - 1];
	for (int i = list.size() - 2; i >= 0; i--) {
		min = (min > list[i]) ? list[i] : min;
		max = (max < list[i]) ? list[i] : max;
	}
	return min + max;
}

int main() {
	while (true) {
		//Input list size
		int size;
		std::cout << "Enter the number of items in the list:";
		std::cin >> size;

		////Input elements of list
		//std::vector<int> list;
		//list.reserve(size);
		//for (int i = 0; i < size; i++) {
		//	int temp;
		//	std::cout << "Enter the #"<<(i+1)<< " item of the list : ";
		//	std::cin >> temp;
		//	list.push_back(temp);
		//}

		//int size = 20;
		std::vector<int> list(size);
		
		for (int i = 0; i < size; i++) {
			list[i]=rand();
		}
		std::vector<int> list2 = list;
		std::vector<int> list3 = list;
		std::vector<int> list4 = list;
		std::vector<int> list5 = list;
		std::vector<int> list6 = list;



		//Sorting the list with bubble sort
		Algorithms::Sorting* sorter = new Algorithms::BubbleSorting();
		auto start = std::chrono::steady_clock::now();
		sorter->Sort(list,false);
		auto end= std::chrono::steady_clock::now();
		delete sorter;
		//Displaying the sorted list
		std::cout << "After sorting the list using Bubble Sort:";

		for (int i = 0; i < size; i++) {
			std::cout << list[i] << "\t";
		}
		std::cout <<std::endl<< "Time Taken by normal Bubble Sort:"<< ((end-start).count()/100)<<"ms"<<std::endl;
		//--end of Bubble sort

		//Sorting the list with Optimized bubble sort
		sorter = new Algorithms::OptimizedBubbleSorting();
		start = std::chrono::steady_clock::now();
		sorter->Sort(list2, false);
		end = std::chrono::steady_clock::now();
		delete sorter;

		//Displaying the sorted list
		std::cout << "After sorting the list using Optimized Bubble Sort:";

		for (int i = 0; i < size; i++) {
			std::cout << list2[i] << "\t";
		}
		std::cout <<std::endl<< "Time Taken by Optimized Bubble Sort:" << ((end - start).count() / 100) << "ms" << std::endl;
		//--end of optimised Bubble sort

		//Sorting the list with OutPlaceMergeSort
		sorter = new Algorithms::OutPlaceMergeSort();
		start = std::chrono::steady_clock::now();
		sorter->Sort(list3);
		int sum = list3[0] + list3[list3.size() - 1];
		end = std::chrono::steady_clock::now();
		delete sorter;

		//Displaying the sorted list
		std::cout << "After sorting the list using OutPlaceMergeSort:";

		for (int i = 0; i < size; i++) {
			std::cout << list3[i] << "\t";
		}
		std::cout << std::endl << "Time Taken by Outplace Merge Sort:" << ((end - start).count() / 100) << "ms" << std::endl;
		//--end of outplace merge sort

		//Sorting the list with OutPlaceMergeSort
		sorter = new Algorithms::InsertionSort();
		start = std::chrono::steady_clock::now();
		sorter->Sort(list4);
		end = std::chrono::steady_clock::now();
		delete sorter;

		//Displaying the sorted list
		std::cout << "After sorting the list using InsertionSort:";

		for (int i = 0; i < size; i++) {
			std::cout << list4[i] << "\t";
		}
		std::cout << std::endl << "Time Taken by Insertion Sort:" << ((end - start).count() / 100) << "ms" << std::endl;
		//--end of outplace merge sort

		//sum of min+max element without sorting

		start = std::chrono::steady_clock::now();
		sum = SumOfMinMax(list5);
		end = std::chrono::steady_clock::now();
		std::cout << std::endl<< "Sum of min max:" << sum << std::endl;
		std::cout << "Time Taken for sum without sorting:" << ((end - start).count() / 100) << "ms" << std::endl;


		//sum of min+max element with sorting

		start = std::chrono::steady_clock::now();
		std::sort(list6.begin(),list6.end());
		sum = list6[0] + list6[list6.size() - 1];
		end = std::chrono::steady_clock::now();
		std::cout << "Sum of min max:" << sum << std::endl;
		std::cout << "Time Taken for sum after sorting:" << ((end - start).count() / 100) << "ms" << std::endl;

		//Input to continue
		std::string choice="N";
		std::cout <<std::endl <<std::endl<<"Try again?(Y/N):";
		std::cin >> choice;

		if (strcmp(choice.c_str(), "Y")!=0) {
			break;
		} 
		
	}
}