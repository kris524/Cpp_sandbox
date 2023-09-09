#include<iostream>

class DynamicArray {
    public:
        DynamicArray(int size) : data(new int [size]), size(size) {};
      
        DynamicArray(const DynamicArray& other) {
            cout << "Copy constructor called " << endl;
            other.data = data;
            other.size = size;
        }
        DynamicArray& operator=(const DynamicArray& other) {
            cout << "Assignment operator called " << endl;
        }
        ~DynamicArray() {
            delete[] data;
        }

    private:
        int* data;
        int size;
}

int main(){
    DynamicArray A = ()
    A = B;
    DynamicArray C = A;

}