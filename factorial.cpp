#include <iostream>

int main()
{
	int a  = 0;

	std::cout << "Give me an input" << std::endl;
	std::cin >> a;

	int result = 1;

	for (int i = 1 ; i <= a ; ++i)
	{
		result *= i;
	}

	std::cout << "Factorial of " << a << " is "<< result << std::endl;
}
