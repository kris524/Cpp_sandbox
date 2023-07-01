#include<iostream>


void swap(int& arg1, int& arg2){
    int temp = arg1;
    arg1 = arg2;
    arg2 = temp;

}

int main(){
    int x = 2;
    int& ref1 = x;

    int y = 3;
    int& ref2 = y;

    std::cout<<"START x "<<x<< std::endl;
    std::cout<<"START y "<<y<< std::endl;
    
    swap(ref1, ref2);

    std::cout<<"END x "<<x<< std::endl;
    std::cout<<"END y "<<y<< std::endl;



}

