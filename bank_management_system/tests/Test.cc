#include <gtest/gtest.h>
#include "../include/bank_account.h"


TEST(Test, FirstTest){
    BankAccount test_ba("Josh", "1.1.1222", 4);
    EXPECT_EQ(test_ba.show_statement(), 4);

}