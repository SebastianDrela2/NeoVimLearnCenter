#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<int> arr1 = { 1, 2, 3, 4 }; 
    std::vector<int> arr2 = { 1, 2, 3, 4 };

    std::vector<int> finalVec;

    for (int i = 0 ; i < arr1.size(); ++i)
    {
        int sum = arr1[i] + arr2[i];

        finalVec.push_back(sum);
    }

    std::cout << "{";

    for(int j = 0 ; j < finalVec.size(); j++)
    {
        std::cout << finalVec[j];

        if (j != finalVec.size() - 1)
        {
            std::cout << ", ";
        }
    }

    std::cout << "}" << std::endl;

    return 0;
}
