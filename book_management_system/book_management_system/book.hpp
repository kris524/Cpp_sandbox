#if !defined(BOOK_HPP)
#define BOOK_HPP



struct Book{
    std::string author;
    std::string title;
    std::string publisher;
    float price;
};

class DataBase  {
    public:
        DataBase();
        DataBase(std::vector<Book> all_books);
        void add_book(std::string author, std::string title, std::string publisher, float price);
        void remove_book(std::string author, std::string title, std::string publisher, float price);
        Book get_book(std::string author, std::string title, std::string publisher, float price);
        void edit_book(std::string author, std::string title, std::string publisher, float price);
    private:
        std::vector<Book> all_books;
}


#endif // BOOK_HPP