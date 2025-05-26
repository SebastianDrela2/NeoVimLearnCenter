#include <iostream>

int main()
{
	int a;
	int b;
	int c;

	std::cout << "Give me number A" << std::endl;

	std::cin >> a;

	std::cout << "Give me number B" << std::endl;

	std::cin >> b;

	std:: cout<< "Give me number C" << std::endl;
        std::cin >> c;
	
	int result = a;


	if (b > result)
	{
		result = b;
	}

	if (c > result)
	{
		result = c;
	}

	std::cout << "Biggest number is " << result << std::endl;
}
