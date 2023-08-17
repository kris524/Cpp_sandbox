#include <gtest/gtest.h>
#include "../include/bank_account.h"


TEST(MyClassTest, FirstTest){
    BankAccount test_ba("Josh", "1.1.1222", 4);
    int value = test_ba.show_statement();
    EXPECT_EQ(value, 4);
}


TEST(MyClassTest, SecondTest){
    BankAccount test_ba("Josh", "1.1.1222", 4);
    std::string value = test_ba.show_details();
    EXPECT_EQ(value, "Josh 1.1.1222");

}

TEST(MyClassTest, ThirdTest){
    BankAccount test_ba("Josh", "1.1.1222", 4);
    test_ba.deposit(5);
    int value = test_ba.show_statement();
    EXPECT_EQ(value, 9);

}

TEST(MyClassTest, ForthTest){
    BankAccount test_ba("Josh", "1.1.1222", 4);
    test_ba.withdraw(3);
    int value = test_ba.show_statement();
    EXPECT_EQ(value, 1);
}