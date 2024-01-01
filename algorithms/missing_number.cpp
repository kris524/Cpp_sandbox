
#include<iostream>


int main(){

    long long x;
    std::cin >> x;

    long long a;

    long actual_sum = (x*(x+1)) / 2;
    long long mul = 0;

    for(int i=0; i<x-1;i++){
        std::cin >> a;
        mul+= a;
    }

    std::cout << actual_sum - mul << std::endl;

}


