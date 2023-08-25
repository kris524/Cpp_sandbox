#include <iostream>
#include <string>
#include "book.hpp"
#include <vector>



void DataBase::add_book(){

    std::string author;
    std::cout<< "Enter Author Name: ";
    std::cin>> author;
    
    std::string title;
    std::cout<< "Enter Title: ";
    std::cin>> title;

    std::string publisher;
    std::cout<< "Enter Publisher: ";
    std::cin>> publisher;
    
    std::string stringValue;
    float price;
    std::cout<< "Enter price: ";
    std::cin>> price;

    if (std::cin.fail()){
        std::cout << "Invalid input for price." << std::endl;
        std::cin.clear();
        std::cin.ignore();
    }

    Book book = {author, title, publisher, price};
    std::cin.ignore();
    std::cout<< "\n-------> Book added: "<<std::endl;
    std::cout<< "-------> Author " << author <<std::endl;
    std::cout<< "-------> Title " << title <<std::endl;
    std::cout<< "-------> Publisher " << publisher <<std::endl;
    std::cout<< "-------> Price " << price <<std::endl;


    all_books.push_back(book);

}



void DataBase::buy_book(){

    std::string author;
    std::cout<< "Enter Author Name: ";
    std::cin>> author;
    
    std::string title;
    std::cout<< "Enter Title: ";
    std::cin>> title;

    std::string publisher;
    std::cout<< "Enter Publisher: ";
    std::cin>> publisher;

    float money;
    std::cout<< "Enter money: "; std::cin>>money;

    for (int i=0; i<all_books.size(); i++){
        if (all_books[i].author == author  && all_books[i].title== title && all_books[i].publisher == publisher && money>all_books[i].price){

                std::cout<<"\n-------> Purchase successful!"<<std::endl;
                return;
        }
    }

    std::cout<<"\n-------> No Such book found :("<<std::endl;



}

