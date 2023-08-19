#include <iostream>
#include <string>
#include "book.hpp"
#include <vector>



void DataBase::add_book(std::string author, std::string title, std::string publisher, float price){
    Book book = {author, title, publisher, price};
    all_books.push_back(book);
}


