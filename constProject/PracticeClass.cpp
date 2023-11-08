#include "PracticeClass.h"

PracticeClass::PracticeClass():num2(12)
{
	num1 = 0;
}

std::ostream& operator<<(std::ostream& out, const PracticeClass& obj)
{
	// TODO: insert return statement here
	out << "Num1: " << obj.num1 << " Num2: " << obj.num2;
	return out;
}

std::istream& operator>>(std::istream& in, PracticeClass& obj)
{
	// TODO: insert return statement here
	std::cout << "Enter the num:";
	in >> obj.num1;
	return in;
}
