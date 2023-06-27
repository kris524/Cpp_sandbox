#include<iostream>
#include<algorithm>
#include <stack>
using namespace std;

int* reverseArray(int* array, int size){
    
    int* reversed_array = new int[size];
   
    stack<int> stack;
    for (int i=0; i<size; i++){
        stack.push(array[i]);
    }

    int index = 0;
    while (!stack.empty()){
        reversed_array[index++]=stack.top();
        stack.pop();
    }
    
    return reversed_array;


}


int main(){

    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    int* reversed = reverseArray(arr, size);

    std::cout << "Reversed Array: ";
    for (int i = 0; i < size; i++)
        std::cout << reversed[i] << " ";
    std::cout << "\n";

    delete[] reversed;
}
