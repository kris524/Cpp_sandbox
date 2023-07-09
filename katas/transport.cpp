int rental_car_cost(int d) {

  int res = d * 40;

  if (d >= 3 && d < 7) {
    res -= 20;
  }

  if (d >= 7) {
    res -= 50;
  }
  return res;
}

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
std::string highAndLow(const std::string &numbers) {
  std::vector<int> res = {};
  std::istringstream iss(numbers);
  int num;
  while (iss >> num){
    res.push_back(num);
  }

  auto max_w = std::max_element(res.begin(), res.end());
  auto min_w = std::min_element(res.begin(), res.end());
  
  int max = *max_w;
  int min = *min_w;

  std::string max_str = std::to_string(max);
  std::string min_str = std::to_string(min);

  return max_str + ' ' + min_str;

  //   return "A";
}

int main() { highAndLow("1 2 3 4 15"); }