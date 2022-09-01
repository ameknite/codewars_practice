#include <string>
#include <sstream>

std::string repeat_str(size_t repeat, const std::string &str)
{
    std::ostringstream os;
    for (size_t i = 0; i < repeat; i++)
    {
        os << str;
    }
    return os.str();
}
