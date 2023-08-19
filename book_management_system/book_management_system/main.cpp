

#include <iostream>

int main(){
    int choice;
    while(true){
        std::cout<< "MENU: \n"<< std::endl;
        std::cout<< "1. Entry of New Book \n"<< std::endl;
        std::cout<< "2. Buy Book \n"<< std::endl;
        std::cout<< "3. Search For Book \n"<< std::endl;
        std::cout<< "4. Edit Details Of Book \n"<< std::endl;
        std::cout<< "5. Exit" << std::endl;

        std::cin>> choice ;
        
        
        if(choice==5){
            break;
        }
    
    }
        
}