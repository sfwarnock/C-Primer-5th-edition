// learncpp_exercise_1.4.a.5.cpp : Defines the entry point for the console application.
//
// Wrtie a complete program that reads an integer from the user, doubles it using the doubleNumber function, then prints the double value out to the console.

#include "stdafx.h"
#include <iostream>

int doubleNumber(int x)
{
	return x * 2;
}


int main()
{
	int x;
	std::cout << "Enter a number: "; 
	std::cin >> x;
	std::cout << "The number you entered multiplied times two is "<< doubleNumber(x) << std::endl;
    return 0;
}