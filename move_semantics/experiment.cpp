#include <iostream>



class Resource{
    public:
        Resource() = default;

        Resource(*my_arr){
            my_arr = new [10];
        }


        ~Resource() {
            delete [];
        }

    private:
        int* my_arr;
        int size;
}