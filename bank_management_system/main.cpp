#include "include/bank_account.h"
#include <iostream>

int main(){
   BankAccount account("Jack", "22.11.1999", 11);
   std::cout << account.show_statement() << std::endl; //11

   account.deposit(5);
   std::cout << account.show_statement() << std::endl; // 16

   std::string details = account.show_details();
   std::cout << details << std::endl;

   account.withdraw(6);
   std::cout << account.show_statement() << std::endl; // 10


}

