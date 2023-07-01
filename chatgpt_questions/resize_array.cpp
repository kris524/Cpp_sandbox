#include<iostream>

int* resizeArray(int* old_arr, int old_size, int new_size){

        int* new_array = new int[new_size];
        std::fill_n(new_array, new_size, 0);

        for(int i=0; i<old_size; i++){
            new_array[i] = old_arr[i];
        }
        return new_array;
}

void printArr(int* arr, int size){
    for (int i=0; i<size; i++){
        std::cout<<arr[i]<< " ";
    }
    std::cout << std::endl;
}

int main(){
    int old_arr[4] = {1,2,3,4};
    std::cout<<"Old array ";
    printArr(old_arr, 4);
    

    int new_size = 2;
    int* new_array = resizeArray(old_arr, 4, new_size);

    std::cout<<"New array ";
    printArr(new_array, new_size);

    delete[] new_array;

}