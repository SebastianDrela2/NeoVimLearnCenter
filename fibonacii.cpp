#include <iostream>


int main()
{
	int numberA = 1;
	int numberB = 1;

	int amount = 0;

	std::cin >> amount;


	if (amount >= 1)
	{
		std::cout << numberA << std::endl;
	}

	if (amount >= 2)
	{
		std::cout << numberA << std::endl;
	}	

	int current = 2;

	while(current <= amount) 
	{
		int next = numberA + numberB;

		numberA = numberB;
		numberB = next;

		std::cout << next << std::endl;

		++current;
	}
}
