#include<iostream>


void swap_by_reference(int& arg1, int& arg2){
    int temp = arg1;
    arg1 = arg2;
    arg2 = temp;

}

void swap_by_value(int arg1, int arg2){
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
    
    swap_by_reference(ref1, ref2);
   

    std::cout<<"END x "<<x<< std::endl;
    std::cout<<"END y "<<y<< std::endl;

    int z = 2;
    

    int w = 3;

    std::cout<<"START w "<<w<< std::endl;
    std::cout<<"START z "<<z<< std::endl;
    
    swap_by_value(w, z);
   

    std::cout<<"END w "<<w<< std::endl;
    std::cout<<"END z "<<z<< std::endl;

}

