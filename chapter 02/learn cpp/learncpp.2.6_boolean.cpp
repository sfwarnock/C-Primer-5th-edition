// learncpp.2.6_boolean.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	std::cout << "Enter an integer: ";
	int x;
	std::cin >> x;

	if (x == 0)
		std::cout << "The value is zero" << std::endl;
	else
		std::cout << "The value is non-zero" << std::endl;
    return 0;
}