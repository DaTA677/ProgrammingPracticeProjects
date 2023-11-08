#pragma once
#include<iostream>

class PracticeClass {
public:
	PracticeClass();//cannot have default constructor here as constatnt variable num2 needs to be initialized
	~PracticeClass() {};

	void SetNum1(const int& inNum) { num1 = inNum; }
	int GetNum1() { return num1; }
	int GetNum1() const { return num1; }//const after the function is considered as overloading

	int GetNum2() const { return num2; }
	//const int GetNum2() const { return num2; } const in the return type is not considered for overloading
	const int GetConstNum2() const { return num2; } 

	friend std::ostream& operator <<(std::ostream& out, const PracticeClass& obj);
	friend std::istream& operator >>(std::istream& in, PracticeClass& obj);

protected:
	int num1;
	const int num2;
};