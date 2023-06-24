#include "raindrops.h"
#include <string>

namespace raindrops
{

    std::string res = "";

    std::string convert(int x)
    {
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
        
        return res;
    }

} // namespace raindrops
