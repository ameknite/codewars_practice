#include <vector>

using namespace std;

int count_sheep(vector<bool> arr)
{
    auto total{0};
    for (auto &&i : arr)
    {
        total += i ? 1 : 0;
    }
    return total;
}
