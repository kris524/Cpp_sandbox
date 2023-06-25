#include <vector>
int grow(std::vector<int> nums)
{

    int res=1;
    for (int i = 0; i < nums.size(); i++)
    {
        res *= nums[i];
    }
    return res;
}