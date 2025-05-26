#include <iostream>
#include <vector>
#include <iomanip>

void printPascalTriangle(int rows) 
{
    if (rows <= 0) 
    {
        return;
    }

    std::vector<int> currentRow = {1};

    for (int i = 0; i < rows; ++i) 
    {
        std::cout << std::string((rows - i - 1) * 2, ' ');

        for (int num : currentRow) 
        {
            std::cout << std::setw(4) << num;
        }

        std::cout << std::endl;
        std::vector<int> nextRow = {1};

        for (int j = 1; j < currentRow.size(); ++j) 
        {
            nextRow.push_back(currentRow[j - 1] + currentRow[j]);
        }

        nextRow.push_back(1);
        currentRow = nextRow;
    }
}

int main() 
{
    int rows;
    std::cin >> rows;
    printPascalTriangle(rows);
    return 0;
}
