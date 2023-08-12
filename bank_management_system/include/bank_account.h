#if !defined(BANKACCOUNT_HPP)
#define BANKACCOUNT_HPP
#include <iostream>
#include <string>
#include <vector>

class BankAccount {
    private:
        std::string name;
        std::string date_of_birth;
        int current_ammount;

    public:
        // BankAccount(){};
        BankAccount(std::string const& name, std::string const& date_of_birth, int const& current_ammount){
            BankAccount::name=name;
            BankAccount::date_of_birth=date_of_birth;
            BankAccount::current_ammount=current_ammount;
        };
        void deposit(int money);
        int show_statement();
}; 


#endif // BANKACCOUNT