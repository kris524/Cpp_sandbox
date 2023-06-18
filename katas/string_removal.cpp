#include <string>
#include <algorithm>
std::string no_space(const std::string &x)
{
    std::string copy = x;
    copy.erase(std::remove(copy.begin(), copy.end(), ' '), copy.end());
    return copy;
}