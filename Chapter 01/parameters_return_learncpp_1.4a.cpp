// parameters_return_learncpp_1.4a.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

//	add() takes two integers as parameters, and returns the result of their sum
//	The values of x and y are determined by the function that calls add()
int add(int x, int y)
{
	return x + y;
}

//	main takes no parameters
int main()
{
	std::cout << add(4, 5) << std::endl;	// Arguments 4 and 5 passed to function add()
    return 0;
}

