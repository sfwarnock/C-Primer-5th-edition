// learncpp2.6_booleanquiz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


bool primeNum(int x)
{
	if (x == 2)
		return true;
	if (x == 3)
		return true;
	if (x == 5)
		return true;
	if (x == 7)
		return true;
	return false;
}


int main()
{
	std::cout << "Enter a number between 1 and 9: ";
	int y;
	std::cin >> y;

	bool prime = primeNum(y);

	if (prime)
		std::cout << y << " is a prime number." << std::endl;
	else
		std::cout << y << " is not a prime number." << std::endl;
    return 0;
}