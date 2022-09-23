#include <string>

std::string no_space(const std::string &x)
{
    std::string new_str {};
    for (auto &&i : x)
    {
        if (i == ' ')
        {
            continue;
        }
        new_str += i;
    }
    return new_str;
}
