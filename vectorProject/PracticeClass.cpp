#include "PracticeClass.h"

void PracticeClass::ReverseVector(std::vector<int>& list)
{
	for (int i = 0; i < list.size()/2; i++) {
		int temp = list.at(i);
		list[i] = list.at(list.size() - 1 - i);
		list[list.size() - 1 - i] = temp;
	}
}

bool PracticeClass::IsBalanced(const std::string& inString)
{
	std::vector<char> stack;

	for (char letter : inString) {
		if (letter == '[' || letter == '(' || letter == '{') {
			stack.push_back(letter);
		}
		else if ((letter == ']' && stack.size() > 0 && stack[stack.size() - 1] == '[') || (letter == '}' && stack.size() > 0 && stack[stack.size() - 1] == '{') || (letter == ')' && stack.size() > 0 && stack[stack.size() - 1] == '(')) {
			stack.erase(stack.end()-1);
		}
		else 
			return false;
	}

	return (stack.size()==0);
}

void PracticeClass::InsertionSort(std::vector<int>& list)
{
	for (int i = 1; i < list.size(); i++) {
		int key = list[i];
		int index = i - 1;
		while (index >= 0 && list[index] > key) {
			list[index + 1] = list[index];
			index--;
		}
		list[index + 1] = key;
	}
	
}
