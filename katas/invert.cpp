#include <vector>

std::vector<int> invert(std::vector<int> values)
{
    std::vector<int> res = {};
    for(int i=0; i<values.size(); i++){
        int ans = values[i] * (-1);
        res.push_back(ans);
    }
    return res;
}