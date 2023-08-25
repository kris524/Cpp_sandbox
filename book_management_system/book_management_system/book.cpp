#include <iostream>
#include <string>
#include "book.hpp"
#include <vector>



void DataBase::add_book(std::string author, std::string title, std::string publisher, float price){
    Book book = {author, title, publisher, price};
    
    std::cout<< "\nBook added: "<<std::endl;
    std::cout<< "Author " << author <<std::endl;
    std::cout<< "Title " << title <<std::endl;
    std::cout<< "Publisher " << publisher <<std::endl;
    std::cout<< "Price " << price;


    all_books.push_back(book);


}


