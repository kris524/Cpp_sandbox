#include <iostream>



class Resource{
    public:
        Resource() : my_arr(nullptr), size(0) {};

        Resource(int size) : my_arr(new int [size]), size(size) {};

        //move constructor
        Resource(Resource&& other) noexcept : my_arr(std::move(other.my_arr)), size(other.size)  {
            std::cout<<"Move!"<<std::endl;
            other.size = 0;
            other.my_arr = nullptr;
        }

        ~Resource() {
            delete[] my_arr;
        }

        int* getData(){
            return my_arr;
        }
        int getSize(){
            return size;
        }

    private:
        int* my_arr;
        int size;
};


void demonstrateMoveSemantics(){
        Resource A(10);
        int* data = A.getData();

        std::cout<<"A Size " <<A.getSize() <<std::endl;
        std::cout<<"A Array Address " <<A.getData() <<std::endl;


        Resource B(std::move(A));

        std::cout<< "B Size " << B.getSize() <<std::endl;
        std::cout<<"B Array Address " <<B.getData() <<std::endl;
        
        std::cout<<"A Size " <<A.getSize() <<std::endl;
        std::cout<<"A Array Address " <<A.getData() <<std::endl;

}

int main(){
    demonstrateMoveSemantics();
    return 0;
}