// enternumber_cpp_1.3a.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>


int main()
{
	std::cout << "Enter a number: ";	// ask user for a number.
	int x;	// no need to intitialize x since we're going to overwrite that value on the very next line.
	std::cin >> x;	// read anumber from console and store it in x
	std::cout << "You entered " << x << std::endl;
    return 0;
}

