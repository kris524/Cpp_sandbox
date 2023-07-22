#include <iostream>

int *findMinimum(int arr[], int size) {
  int* min = &arr[0];
  for (int i = 0; i < size; i++){
    if(arr[i] < *min){
        min = &arr[i];
    }
  }
  return min;
}
    
int main() {
  int numbers[] = {10, 5, 8, 3, 12, 7};
  int size = sizeof(numbers) / sizeof(numbers[0]);

  int *minPtr = findMinimum(numbers, size);

  if (minPtr != nullptr) {
    std::cout << "Minimum element: " << *minPtr << std::endl;
  } else {
    std::cout << "Array is empty!" << std::endl;
  }

  return 0;
}
