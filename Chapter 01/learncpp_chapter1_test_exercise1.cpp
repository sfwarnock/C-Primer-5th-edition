// learncpp_chapter1_test_exercise1.cpp : Defines the entry point for the console application.
//	Write a single-file program that reads two seprate integers from the user, adds them togetherm and then outputs the answer.

#include "stdafx.h"
#include <iostream>

int readNumber()
{
	std::cout << "Enter an integer: ";
	int x;
	std::cin >> x;
	return x;
}


void writeAnswer(int result)
{
	std::cout << "The sum of the two numbers you entered is:" << result << std::endl;
}

int main()
{
	int input1 = readNumber();

	int input2 = readNumber();

	int sum = input1 + input2;

	writeAnswer(sum);

    return 0;
}

