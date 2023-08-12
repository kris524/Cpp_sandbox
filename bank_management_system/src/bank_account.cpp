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
            // current_ammount += 5;
            return current_ammount;
        }
