#include <vector>
#include <numeric>

int positive_sum(const std::vector<int> arr)
{
    return std::accumulate(arr.begin(), arr.end(), 0,
                           [](int acc, int x)
                           {
                               return x > 0 ? acc + x : acc;
                           });
}
