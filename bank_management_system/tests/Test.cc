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