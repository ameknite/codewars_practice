#include <string>
#include <cmath>
#include <iostream>

int square_digits(int num)
{
    std::string s{};
    for (auto &&c : std::to_string(num))
    {
        s += std::to_string((int)pow(c - '0', 2));
    }
    return std::stoi(s);
}
