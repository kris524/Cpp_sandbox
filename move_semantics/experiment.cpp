#include <iostream>



class Resource{
    public:
        Resource() = default;

        Resource(int size){
            int* my_arr = new int[size];
        }

        Resource(Resource&& other) noexcept{
            size = other.size;
            my_arr = other.my_arr;

            other.size = 0;
            other.my_arr = nullptr;
        }

        ~Resource() {
            delete [] my_arr;
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
}


void demonstrateMoveSemantics(){

}

int main(){
    demonstrateMoveSemantics();
    return 0;
}