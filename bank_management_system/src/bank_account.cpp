#include "../include/bank_account.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;


void BankAccount::deposit(int money){
            current_ammount+=money;
        }

int BankAccount::show_statement(){
            
            return current_ammount;
        }

std::string BankAccount::show_details(){
            std::string result = name + " " + date_of_birth;
            return result;
}

void BankAccount::withdraw(int money){
    current_ammount -= money;
}