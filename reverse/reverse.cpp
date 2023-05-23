#include "reverse_string.h"
#include <algorithm>
#include <string>
namespace reverse_string
{
    std::string reverse_string(std::string string)
    {
        std::reverse(string.begin(), string.end());
        return string;
    }
} // namespace reverse_string
