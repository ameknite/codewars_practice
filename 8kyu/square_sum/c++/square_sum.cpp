#include <vector>
#include <numeric>

int square_sum(const std::vector<int> &numbers)
{
    return std::accumulate(numbers.cbegin(), numbers.cend(), 0, [](int a, int b)
                           { return a + (b * b); });
}
