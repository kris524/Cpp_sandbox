#include <iostream>

int main() {

  std::cout << "Enter two numbers" << std::endl;
  int x;
  int y;
  std::cin >> x;
  std::cin >> y;

  std::cout << "Enter operand" << std::endl;
  char sign;
  int result;
  std::cin >> sign;

  if (sign == '+') {
    result = x + y;
  }
  if (sign == '-') {
    result = x - y;
  }
  if (sign == '*') {
    result = x * y;
  }
  if (sign == '/') {
    result = x / y;
  }

  std::cout << "Result" << std::endl;
  std::cout << result << std::endl;
}