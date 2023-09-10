#include<iostream>

class DynamicArray {
    public:
        DynamicArray() : data(nullptr), size(0) {};

        DynamicArray(int size) : data(new int [size]), size(size) {};
      
        DynamicArray(const DynamicArray& other) {
            std::cout << "Copy constructor called " << std::endl;
            data = new int [other.size];
            size = other.size;
            for (int i=0; i< other.size; i++){
                data[i] = other.data[i];
            }
        };
        DynamicArray& operator=(const DynamicArray& other) {
            std::cout << "Assignment operator called " << std::endl;
            if (this != &other){
                delete[] data;
                data = new int [other.size];
                size = other.size;
                for (int i=0; i< other.size; i++){
                    data[i] = other.data[i];
                }

            }
            return *this;

        };
        ~DynamicArray() {
            delete[] data;
        };

        void printArray(){

            for (int i=0; i< size; i++){
                std::cout<< data[i] << " ";
            }
        }
        

    private:
        int* data;
        int size;
};

int main(){
    DynamicArray A(10);

    A.printArray();

    DynamicArray B;
    // B = A;
    DynamicArray C = A;

    C.printArray();

}