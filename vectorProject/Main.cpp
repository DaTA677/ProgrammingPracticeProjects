#include<iostream>
#include<vector>
#include<chrono>
#include"PracticeClass.h"

int main() {

	PracticeClass* obj = new PracticeClass();

	std::cout << "::Vector Practice::" << std::endl;
	
	//Reverse list
	std::cout << "Reverse of list:" << std::endl;

	std::vector<int>list = std::vector({ 1,2,3,4,5 });
	obj->ReverseVector(list);
	std::cout << "Reverse of list { 1,2,3,4,5 }:";
	for (int item : list) {
		std::cout << item<<" ";
	}
	std::cout << std::endl;

	list = std::vector({ 2,3,1,4 });
	obj->ReverseVector(list);
	std::cout << "Reverse of list { 2,3,1,4 }:";
	for (int item : list) {
		std::cout << item<< " ";
	}
	std::cout << std::endl;


	//Balanced paranthesis
	std::cout << "Balanced parenthesis:" << std::endl;

	std::cout << "The string \"{{[]}()}\" is " << (obj->IsBalanced("{{[]}()}") ? "balanced" : "not balanced")<<std::endl;
	std::cout << "The string \"{{[}()}\" is " << (obj->IsBalanced("{{[}()}") ? "balanced" : "not balanced")<<std::endl;
	std::cout << "The string \"{{[]}()}}\" is " << (obj->IsBalanced("{{[]}()}}") ? "balanced" : "not balanced")<<std::endl;

	//Sorting list:
	std::cout << "Sorting list using insertion sort:" << std::endl;
	
	list = std::vector({ 4,3,2,5,7 });
	std::cout << "Original list: ";
	for (int item : list) {
		std::cout << item << " ";
	}
	std::cout << std::endl;

	obj->InsertionSort(list);
	std::cout << "Sorted list: ";
	for (int item : list) {
		std::cout << item << " ";
	}
	std::cout << std::endl;

	delete obj;
}