// learncpp2.4_integers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	unsigned short x = 0; // smallest 2-byte unsigned value possiable
	std::cout << "x was: " << x << std::endl;
	x = x - 1; //overflow!
	std::cout << "x is now: " << x << std::endl;
    return 0;
}

