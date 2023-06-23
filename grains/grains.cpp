// so take the number given and do -1, then use this to do 2 to the power of it.
#include <cmath>

#include "grains.h"

namespace grains
{

    unsigned long long square(int x)
    {
        return pow(2, x - 1);
    }
    unsigned long long total()
    {
        return (1ULL << 63)*2 -1;
    }
} // namespace grains
