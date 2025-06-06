#include <print>
#include <map>

int getNumberPaths(int rows, int columns)
{
    std::map<std::pair<int, int>, int> map;

    for(int i = 1 ; i < rows + 1; ++i)
    {
        map[{i, 1}] = 1;
    }

    for (int i = 1; i < columns + 1; ++i)
    {
        map[{1, i}] = 1;
    }

    for (int i = 2; i < rows + 1; ++i)
    {
        for (int j = 2 ; j < columns + 1; ++j)
        {
            map[{i, j}] = map[{i - 1, j}] + map[{i, j - 1}];
        }
    }

    return map[{rows, columns}];
}

int main()
{
    int rows = 4;
    int columns = 4;

    int paths = getNumberPaths(rows, columns);

    std::println("Total paths: {}", paths);

    return 0;
}
