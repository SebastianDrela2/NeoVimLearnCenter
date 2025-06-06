#include <print>
#include <iostream>
#include <span>
#include <string>
#include <vector>
#include <utility>


std::span<int> takeWhileSpan(std::span<int> span, int target)
{
    for (int i = 0; i < span.size(); ++i)
    {
        if (span[i] >= target)
        {
            return span.subspan(0, i);
        }
    }

    return span;
}

void quickSortSpan(std::span<int> span)
{
    int size = span.size();

    if (size < 2)
    {
        return;
    }

    int last = size - 1;
    int pivot = span[last];
    int current = 0;
    int swapMarker = -1;

    for(int current = 0 ; current <= last; current++)
    {
        if (span[current] > span[last])
        {
            continue;
        }

        if (span[current] <= span[last])
        {
            ++swapMarker;

            if (current == swapMarker)
            {
                continue;
            }

            if (current > swapMarker)
            {
                std::swap(span[current], span[swapMarker]);
            }
        }
    }

    int elementAfterMarker = swapMarker + 1;
    int rightLength = size - elementAfterMarker;

    auto leftSpan = takeWhileSpan(span, pivot);
    auto rightSpan = span.subspan(elementAfterMarker, rightLength);

    quickSortSpan(leftSpan);
    quickSortSpan(rightSpan);
}


std::vector<int> getVectorFromInput(std::string& text)
{
    std::vector<int> vector{ };
    std::getline(std::cin, text);

    while (text.length() > 0)
    {
        int value = std::stoi(text);
        vector.push_back(value);

        std::getline(std::cin, text);
    }

    return vector;
}

int main()
{
    std::println("Give me array!");
    std::string text;

    std::vector<int> vector = getVectorFromInput(text);

    quickSortSpan(vector);
    std::println("Finished sorting");

    for (auto element : vector)
    {
        std::print("{} ", element);
    }

    std::println();

    return 0;
}
