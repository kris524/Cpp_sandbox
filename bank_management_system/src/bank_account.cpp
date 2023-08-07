#include <iostream>
#include <string>


class BankAccount {
    private:
        std::string name;
        std::string date_of_birth;
        int starting_ammount;

    public:

        void deposit(int money){
            starting_ammount+=money;
        }

}
