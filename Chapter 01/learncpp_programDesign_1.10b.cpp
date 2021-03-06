// learncpp_programDesign_1.10b.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int getUserInput()
{
	std::cout << "Please enter an integer: ";
	int value;
	std::cin >> value;
	return value;
}

int getMathematicalOperation()
{
	std::cout << "Please enter which operator you want ( 1= +, 2 = -, 3 = *, 4 = /): ";

	int op;
	std::cin >> op;

	// What is user enters an invalid character?
	// We'll ingnore this possibility for now.

	return op;
}

int calculateResults(int x, int op, int y)
{
	if (op == 1)
		return x + y;
	if (op == 2)
		return x - y;
	if (op == 3)
		return x * y;
	if (op == 4)
		return x / y;

	return x + y; // if the user passed an invalid op we'll do addtion.
}

void printResults(int result)
{
	std::cout << "Your result is: " << result << std::endl;
}

int main()
{
	// Get first number from user
	int input1 = getUserInput();

	// Get mathematical operation from user
	int op = getMathematicalOperation();

	// Get second number from user
	int input2 = getUserInput();

	// Calculate result and store in temporary variable (for readability/debug-ability)
	int result = calculateResults(input1, op, input2);

	// Print result
	printResults(result);

    return 0;
}

