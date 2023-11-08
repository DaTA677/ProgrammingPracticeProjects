#include<iostream>
#include<chrono>
#include"PracticeClass.h"

int main() {

	PracticeClass* obj = new PracticeClass();
	std::cout << "::String practice::" << std::endl;
	
	//Reverse string;
	std::cout << "Reverse String" << std::endl;
	
	obj->ReverseString("RainMan");
	obj->ReverseString("p");
	obj->ReverseString("");
	obj->ReverseString("Pin");
	obj->ReverseString("Pip");
	obj->ReverseString("pip");

	//String encode:
	std::cout << "String encode" << std::endl;

	std::cout << "original string: RainMan ;encoded string: " << obj->EncodeString("RainMan") << std::endl;
	std::cout << "original string: aa ;encoded string: " << obj->EncodeString("aa") << std::endl;
	std::cout << "original string: aaabaaaa;encoded string: " << obj->EncodeString("aaabaaaa") << std::endl;
	std::cout << "original string: __abb ;encoded string: " << obj->EncodeString("__abb") << std::endl;
	

}