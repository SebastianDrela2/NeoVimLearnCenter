#include <iostream>

void buildFloydTraingle(int input)
{
    int start = 0;
    int level = 1;

    std::cout << std::endl;

    while(start <= input) 
    {
        for (int j = 0 ; j < level; j++)
        {
            if (start > input)
            {
                break;
            }

            std::cout << " " << start;
            ++start;
        }

        std::cout << std::endl;

        ++level;
    }
}

int main()
{
    int input = 0;
    std::cin >> input;

    buildFloydTraingle(input);
}

