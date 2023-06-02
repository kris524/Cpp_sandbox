#include "reverse.h"
#include <algorithm>
#include <string>
#include <iostream>
namespace reverse_string
{
    std::string reverse_string(std::string string)
    {
        std::reverse(string.begin(), string.end());
        return string;
    }
} // namespace reverse_string

int main() {
    std::cout << reverse_string::reverse_string("QERQWE") << std::endl;
    return 0;
} 