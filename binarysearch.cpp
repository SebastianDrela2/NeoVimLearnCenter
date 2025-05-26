#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec = { 2, 4, 6, 8 };

    int target = 6;
    bool found = false;

    while (vec.size() != 0)
    {
        size_t mid = vec.size() / 2;

        if (target == vec[mid])
        {
            found = true;
            break;
        }

        if (target > vec[mid]) 
        {
            vec = std::vector<int>(vec.begin() + mid + 1, vec.end());
        }
        else 
        {
            vec = std::vector<int>(vec.begin(), vec.begin() + mid);
        }
    }

    if (found)
    {
        std::cout << "Element exists in the vector" << std::endl;
    }
    else 
    {
        std::cout << "Element does not exist in the vector" << std::endl;
    }
    return 0;
}
