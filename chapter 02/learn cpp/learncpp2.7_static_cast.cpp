// learncpp2.7_static_cast.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	std::cout << "Input a keyboard character: ";

	char ch;
	std::cin >> ch;
	std::cout << ch << " has ASCII code " << static_cast <int> (ch) << std::endl;

	std::cin >> ch;
	std::cout << ch << " has ASCII code " << static_cast <int> (ch) << std::endl;

    return 0;
}

