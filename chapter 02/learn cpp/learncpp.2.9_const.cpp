// learncpp.2.9_const.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

void a()
{
	// This define value is now available for the rest of this file
#define x 5
	std::cout << x;
}


void b()
{
	//Even though we're intending this x to be local to function b()
	// it conflicts with the x we defined inside function a()
#define x 6
	std::cout << x;
}


int main()
{
	a();
	b();

    return 0;
}

