#include "raindrops.h"
#include <string>
#include <variant>

namespace raindrops
{

    std::string convert(int x)
    {
        std::string res = "";

        if (x % 3 == 0)
        {
            res += "Pling";
        }
        if (x % 5 == 0)
        {
            res += "Plang";
        }
        if (x % 7 == 0)
        {
            res += "Plong";
        }
        if (res =="") {
            res = std::to_string(x);
        }

        return res;
    }

} // namespace raindrops
