#include <string>

std::string disemvowel(const std::string &str)
{
    std::string vowels = "aeiouAEIOU";
    std::string output{};
    for (auto &&c : str)
    {
        if (!(vowels.find(c) != std::string::npos))
        {
            output += c;
        }
    }
    return output;
}
