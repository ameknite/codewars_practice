#include <string>

using namespace std;

string sliceString(string str)
{
    str.erase(0, 1);
    str.pop_back();
    return str;
}
