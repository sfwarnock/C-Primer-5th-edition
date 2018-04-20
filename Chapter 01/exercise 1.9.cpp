// Write a program that uses a while to sum the numbers from 50 to 100.

#include<iostream>

int main()
{
	int sum = 50, val = 1;
	// keep executing the while as long as val is equal to 50 and less than 100.
	while (val <= 100) {
		sum += val; // assign sum + val to sum
		++val;		// add 1 to val
	}
	std::cout << "The sum of 50 to 100 inclusive is " << sum << std::endl;
	system("pause");
	return 0;
}