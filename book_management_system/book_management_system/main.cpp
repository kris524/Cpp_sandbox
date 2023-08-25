#include <iostream>
#include "book.hpp"

int main(){
    int choice;

    DataBase database;
    while(true){
        
        
        std::cout<< "MENU: \n"<< std::endl;
        std::cout<< "1. Entry of New Book \n"<< std::endl;
        std::cout<< "2. Buy Book \n"<< std::endl;
        std::cout<< "3. Search For Book \n"<< std::endl;
        std::cout<< "4. Edit Details Of Book \n"<< std::endl;
        std::cout<< "5. Exit" << std::endl;

        std::cin>> choice ;

        switch(choice){

            case 1: cin.ignore();
                    std::string author;
                    std::cout<< "Enter Author Name: ";
                    std::cin>> author;
                    
                    std::string title;
                    std::cout<< "Enter Title: ";
                    std::cin>> title;
        
                    std::string publisher;
                    std::cout<< "Enter Publisher: ";
                    std::cin>> publisher;
                    
                    float price;
                    std::cout<< "Enter price: ";
                    std::cin>> price;
                    
                    database.add_book(author, title, publisher, price);

                    break;


            
        }

    
    }
        
}