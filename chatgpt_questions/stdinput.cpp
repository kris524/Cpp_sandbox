#include<iostream>

int main(){
    int x;
    std::cin >> x;

    if (x<10){
        std::cout<<"This number is too small"<< std::endl;
    }
    else {
        std::cout<<"This number is big enough"<< std::endl;
    }
}

