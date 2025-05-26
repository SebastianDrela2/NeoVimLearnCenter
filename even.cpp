#include <iostream>

bool isEven(int a)
{
	return a % 2 == 0;
}

int main()
{

	int a;
	std::cin >> a;
	bool even = isEven(a);

	std::cout << even << std::endl;
}
