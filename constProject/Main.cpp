#include<iostream>
#include<chrono>

int main() {

	std::cout << "::Practice for constant::" << std::endl;

	const int a = 0;
	//a = 5; error as constant variable cannot be modified

	int b = 1;

	const int* c = &a; //pointer to const integer;
	//(*c) = 12; cannot modify the value stored in the reference
	c = &b;//can modify the reference stored in the variable
	//*c = 12; even if the reference bound is non-const, cannot modify the value

	int* const d = &b;//const pointer to interger-- interpreted by the compiler as int (*const) d-> const to the (*)pointer and not the datatype
	//int *const d = &a;// cannot store contant value to a constant pointer

	*d = 15;//can update value since pointer is constant and not the value

	int const e = 20;// for variables const can be present on either side of the datatype
	//e = 21; const 

	const int* const f = &a;// const ponter to const
	//f = d; cannot update the pointer
	//*f = 12; cannot update the value
}