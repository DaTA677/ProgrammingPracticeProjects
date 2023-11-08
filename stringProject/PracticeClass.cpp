#include "PracticeClass.h"
#include<iostream>

void PracticeClass::ReverseString(const std::string& in)
{
	std::string rev="";
	for (int i = in.size()-1; i > -1; i--) {
		rev += in[i];
	}

	std::cout <<"original string: "<<in << ";reversed string: " << rev << std::endl;
}

std::string PracticeClass::EncodeString(const std::string& in)
{
	std::string out = "";

	int count = 1;

	for (int i = 0; i < in.size() - 1; i++) {
		if (in[i] == in[i + 1]) {
			count++;
		}
		else {
			out += in[i] + std::to_string(count);
			count = 1;
		}
	}

	out += in[in.size() - 1] + std::to_string(count);

	return out;
}

bool PracticeClass::IsPalindrome(const std::string& in)
{
	for (int i = 0; i < in.size() / 2; i++) {
		if (in[i] != in[in.size() - 1 - i])
			return false;
	}
	return true;
}

bool PracticeClass::IsPalindromeCaseInsensitive(const std::string& in)
{
	for (int i = 0; i < in.size() / 2; i++) {
		if (std::toupper(in[i]) != std::toupper(in[in.size() - 1 - i]))
			return false;
	}
	return true;
}
