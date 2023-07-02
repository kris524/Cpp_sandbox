int past(int h, int m, int s) {
    int res = ((h*60*60) + (m*60) + s) * 1000;
    return res;
}


#include <vector>
#include <numeric>

std::vector<int> pipe_fix(const std::vector<int>& nums) {
    // int start = nums.front();
    // int end = nums.back();

    auto start = *std::min_element(nums.begin(), nums.end());
    auto end = *std::max_element(nums.begin(), nums.end());

    std::vector<int> new_nums(1+end-start); // create a vector filled with 0 in that size

    std::iota(new_nums.begin(), new_nums.end(), start);
    return new_nums;

}
