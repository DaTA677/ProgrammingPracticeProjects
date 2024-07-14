#include "PracticeClass.h"

void PracticeClass::ReverseVector(std::vector<int>& inList)
{
	for (int i = 0; i < inList.size()/2; i++) {
		int temp = inList.at(i);
		inList[i] = inList.at(inList.size() - 1 - i);
		inList[inList.size() - 1 - i] = temp;
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

void PracticeClass::InsertionSort(std::vector<int>& inList)
{
	for (int i = 1; i < inList.size(); i++) {
		int key = inList[i];
		int index = i - 1;
		while (index >= 0 && inList[index] > key) {
			inList[index + 1] = inList[index];
			index--;
		}
		inList[index + 1] = key;
	}
	
}
