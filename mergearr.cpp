#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int min = -100000;

    std::vector<int> vec2 = {2, 4, 6};
    std::vector<int> vec = {1, 2, 3};

    std::vector<int> resultVec;

    for(int i = 0 ; i < vec.size(); ++i)
    {
       resultVec.push_back(vec[i]); 
    }

    for(int i = 0; i < vec2.size(); ++i)
    {
        resultVec.push_back(vec2[i]);
    }    

    std::sort(resultVec.begin(), resultVec.end());

    for(int i = 0 ; i < resultVec.size(); i++)
    {
        std::cout << resultVec[i];
    }

    std::cout << std::endl;
}
