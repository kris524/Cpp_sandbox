#include <iostream>
#include "book.hpp"

int main(){
    int choice;

    DataBase database;
    while(true){

        // std::cin.ignore();
        std::cout<< "\n-------------\n"<< std::endl;
        std::cout<< "MENU: \n"<< std::endl;
        std::cout<< "1. Entry of New Book \n"<< std::endl;
        std::cout<< "2. Buy Book \n"<< std::endl;
        std::cout<< "3. Search For Book \n"<< std::endl;
        std::cout<< "4. Edit Details Of Book \n"<< std::endl;
        std::cout<< "5. Exit" << std::endl;
        std::cin>> choice ;

        switch(choice){

            case 1: 
                    database.add_book();
                    break;

            case 2:
                    database.buy_book();
                    break;

            case 3:
                    


            default: std::cout<< "\nInvalid choice";


        }

    
    }
        
}