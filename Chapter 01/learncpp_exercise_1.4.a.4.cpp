// learncpp_exercise_1.4.a.4.cpp : Defines the entry point for the console application.
//
//	write a function  called doubleNumber() that takes one integer parameter and returns twice the value passed in.

#include "stdafx.h"
#include<iostream>

int doubleNumber()
{
	std::cout << "Enter an integer: ";
	int x;
	std::cin >> x;
	return x * 2;
}

int main()
{
	int y = doubleNumber();

	std::cout << "The integer you entered doubled is " << y << std::endl;
    return 0;
}