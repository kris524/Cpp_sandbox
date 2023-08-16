#include <gtest/gtest.h>
#include "../include/bank_account.h"


TEST(MyClassTest, FirstTest){
    BankAccount test_ba("Josh", "1.1.1222", 4);
    int value = test_ba.show_statement();
    EXPECT_EQ(value, 4);

}