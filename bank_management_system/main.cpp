#include "include/bank_account.h"
#include <iostream>

int main(){
   BankAccount account("Jack", "22.11.1999", 11);
   std::cout << account.show_statement() << std::endl;

   account.deposit(5);
   std::cout << account.show_statement() << std::endl;

}

