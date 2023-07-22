#include <iostream>

int main() {
  int *res = new int[4];

  int array_1[4] = {1, 2, 3, 4};
  int array_2[4] = {5, 6, 7, 8};

  int size = sizeof(array_1) / sizeof(array_1[0]);

  for (int i = 0; i < size; i++) {
    res[i] = array_1[i] + array_2[i];
    std::cout << "Element in res: " << res[i] << std::endl;
  }

  delete[] res;
}
