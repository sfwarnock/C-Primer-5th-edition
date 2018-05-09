// reusingFunctions_learncpp_1.4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

// getValueFromUser will read a value in from the user, and return in to the caller
int getValueFromUser()
{
	std::cout << "Enter an integer: ";	//ask user for an integer
	int a;	// allocate a variable to hold the user input
	std::cin >> a;	// get user input from console and store in variable a
	return a;	// return this value to the function's caller (main)
}
int main()
{
	int x = getValueFromUser();	//first vall to getValueFromUser
	int y = getValueFromUser();	// second call to getValueFromUser

	std::cout << x << " + " << y << " = " << x + y << std::endl;

    return 0;
}