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
	
	//Palindrome check:
	std::cout << "Palindrome check" << std::endl;

	std::cout << "The string, RainMan, " << (obj->IsPalindrome("RainMan")?"is ":"is not ") <<"a Palindrome" << std::endl;
	std::cout << "The string, Malayalam, " << (obj->IsPalindrome("Malayalam")?"is ":"is not ") <<"a Palindrome" << std::endl;
	std::cout << "The string, MALAYALAM, " << (obj->IsPalindrome("MALAYALAM")?"is ":"is not ") <<"a Palindrome" << std::endl;
	std::cout << "The string, anna, " << (obj->IsPalindrome("anna")?"is ":"is not ") <<"a Palindrome" << std::endl;
	std::cout << "The string, Anna, " << (obj->IsPalindrome("Anna")?"is ":"is not ") <<"a Palindrome" << std::endl;

	//case insensitive Palindrome check:
	std::cout << "Case insensitive Palindrome check" << std::endl;

	std::cout << "The string, RainMan, " << (obj->IsPalindromeCaseInsensitive("RainMan") ? "is " : "is not ") << "a Palindrome" << std::endl;
	std::cout << "The string, Malayalam, " << (obj->IsPalindromeCaseInsensitive("Malayalam") ? "is " : "is not ") << "a Palindrome" << std::endl;
	std::cout << "The string, MALAYALAM, " << (obj->IsPalindromeCaseInsensitive("MALAYALAM") ? "is " : "is not ") << "a Palindrome" << std::endl;
	std::cout << "The string, anna, " << (obj->IsPalindromeCaseInsensitive("anna") ? "is " : "is not ") << "a Palindrome" << std::endl;
	std::cout << "The string, Anna, " << (obj->IsPalindromeCaseInsensitive("Anna") ? "is " : "is not ") << "a Palindrome" << std::endl;

}