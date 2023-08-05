#include <vector>
#include <iostream>

std::vector<int> sumTwoSmallestNumbers(std::vector<int> &numbers)
{
    std::sort(numbers.begin(), numbers.end());
    return numbers;

}

int main() {
    std::vector<int> numbers = {5, 10, 1, 8, 3};
    sumTwoSmallestNumbers(numbers);
    std::cout<< numbers[0] + numbers[1] << std::endl;

}
