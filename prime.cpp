#include <iostream>

int main()
{
    int input = 0;

    std::cin >> input;
    bool isPrime = true;

    for(int i = 2 ; i < input; ++i)
    {
        if (input % i == 0)
        {
            isPrime = false;
        }
    }

    if (isPrime)
    {
        std::cout << "Given number is prime"  << std::endl;
    }
    else 
    {
        std::cout << "Given number is not a prime" << std::endl;
    }
}
