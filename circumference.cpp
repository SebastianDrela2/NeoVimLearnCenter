#include <iostream>

int main()
{
    int radius = 0;
    std:: cout << "Give me radius " << std::endl;
    std::cin >> radius;

    const double pi = 3.14;
    const double result = 2 * pi * radius; 
    std::cout << "Circumference of a circle is " << result << std::endl;
}
