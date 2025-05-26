#include <iostream>
#include <string>
#include <vector>

std::vector<int> getArrayFromText(std::string text)
{
   std::vector<int> result;
   int currentNum = 0;
   int currentArrIdx = 0;

   for(int i = 0 ; i < text.length(); ++i)
   {
       if (text[i] == ',')
       {
          result.push_back(currentNum);
          currentNum = 0;
          currentArrIdx++;
       }
       else 
       {
           currentNum += currentNum * 10 + (text[i] - '0');
       }
   }

   result.push_back(currentNum);

   return result;
}

std::vector<int> getSortedArray(std::vector<int> vec)
{
    for (int i = 0 ; i < vec.size() ; ++i)
    {
        for (int j = 0 ; j < vec.size() - i - 1; ++j)
        {
            if (vec[j + 1] < vec[j])
            {
                int tmp = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = tmp;
            }
        }
    }

    return vec;
}

int main()
{

    std::cout << "Give me an array with , surroudning it" << std::endl;

    std::string text;
    std::getline(std::cin, text);
    
    std::vector<int> arr = getArrayFromText(text);
    std::vector<int> sortArr = getSortedArray(arr);

    for (int i = 0 ; i < sortArr.size() ; i++)
    {
        std::cout << sortArr[i];

        if (i != sortArr.size() - 1)
        {
            std::cout << ",";
        }
    }

    std::cout << std::endl;

    return 0;
}
