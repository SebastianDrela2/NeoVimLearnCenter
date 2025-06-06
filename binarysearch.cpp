#include <iostream>
#include <vector>

//A B C D E F G H I
//0 1 2 3 4 5 6 7 8
//- - - - 0 1 2 3 4
//- - - - - - 0 1 2 
//- - - - - - - 0 1
//- - - - - - - - 0

//2 4 6 8
//A B C D E F G H I
//0 1 2 3 4 - - - -
//0 1 2 - - - - - -
//0 1 - - - - - - -
//0 - - - - - - - -

//2 4 6 8
//2 4 6 -
//- 4 6 -
//

int binarySearch(std::vector<int>* vec, int* target)
{
    bool found = false;
    int start = 0;
    int end = vec->size();
    int size = end - start; 
    int mid = end / 2;

    while (start != end)
    {
        if (*target == (*vec)[mid])
        {
            return mid;
        }

        if (*target > (*vec)[mid]) 
        {
            start = mid + 1;
        }
        else 
        {
            end = mid;
        }

        mid = (start + end) / 2;
        size = end - start;
    }

    if (*target < (*vec)[0])
    {
        return -1;
    }
    else if (*target > (*vec)[vec->size() - 1]) 
    {
        return ~vec->size();
    }

    return -mid;
}

int main()
{
    std::vector<int> vec = { 2, 4, 6, 8 };
    int target = 9;
    auto result = binarySearch(&vec, &target);

    if (result < 0)
    {
        std::cout << "Ones complement " << ~result << std::endl;
    }

    std::cout << "Result " << result << std::endl;
   
    return 0;
}
