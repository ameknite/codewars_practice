#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
    if (input.empty())
    {
        return {};
    }
    int count{};
    int sum{};
    for (auto &&x : input)
    {
        (x > 0) ? count++ : sum += x;
    }
    return std::vector{count, sum};
}
