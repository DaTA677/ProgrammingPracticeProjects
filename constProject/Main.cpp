#include<iostream>
#include "Sorting.h"
#include "BubbleSorting.h"
#include "OptimizedBubbleSorting.h"
#include "OutPlaceMergeSort.h"

#include<chrono>

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
		std::cout << "Time Taken by Optimized Bubble Sort:" << ((end - start).count() / 100) << "ms" << std::endl;
		
		//Sorting the list with OutPlaceMergeSort
		sorter = new Algorithms::OutPlaceMergeSort();
		start = std::chrono::steady_clock::now();
		sorter->Sort(list3);
		end = std::chrono::steady_clock::now();
		delete sorter;

		//Displaying the sorted list
		std::cout << "After sorting the list using OutPlaceMergeSort:";

		for (int i = 0; i < size; i++) {
			std::cout << list3[i] << "\t";
		}
		std::cout << "Time Taken by Optimized Bubble Sort:" << ((end - start).count() / 100) << "ms" << std::endl;

		//Input to continue
		std::string choice="N";
		std::cout <<std::endl <<std::endl<<"Try again?(Y/N):";
		std::cin >> choice;

		if (strcmp(choice.c_str(), "Y")!=0) {
			break;
		} 
		
	}
}