#if !defined(BOOK_HPP)
#define BOOK_HPP

#include <iostream>
#include <vector>
#include <string>


struct Book{
    std::string author;
    std::string title;
    std::string publisher;
    float price;
};

class DataBase  {
    public:
        DataBase(){};
        // DataBase(std::vector<Book> all_books);
        void add_book();
        void buy_book();
        std::string show_all_books();
    private:
        std::vector<Book> all_books;
};


#endif // BOOK_HPP