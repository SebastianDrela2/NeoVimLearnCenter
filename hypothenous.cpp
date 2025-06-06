#include <iostream>
#include <cmath>

int main()
{
    double a;
    double b;

    std::cerr
    std::cout << "Enter side A " << std::endl;
    std::cin >> a;

    std::cout << "Enter side B " << std::endl;
    std::cin >> b;

    double c = std::sqrt(std::pow(a, 2) + std::pow(b, 2));

    std::cout << "Hypothenous is " << c;
    std::cout << std::endl;

    return 0;
}

