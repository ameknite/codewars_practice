#include <vector>

std::vector<int> arr(int n = 0) {
    std::vector<int> array;
    array.reserve(n);
    for (size_t i = 0; i < n; i++)
    {
        array.push_back(i);
    }
    return array;
}
