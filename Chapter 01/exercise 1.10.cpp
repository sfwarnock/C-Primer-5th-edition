// Use the decrement operator to write a while that prints the numbers from ten down to zero.

#include <iostream>

int main()
{
	int sum = 10, val = 1;
	// keep executing the while as long as sum is equal to 10 or greater than zero.
	while (sum >= 0) {
		sum -= val; // asign sum - val to sum
		-val;
		std::cout << sum << std::endl;
	}
	system("pause");
	return 0;
}