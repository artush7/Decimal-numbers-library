#include <gtest/gtest.h>

#include "/home/artush/main/c++/homework/Decimal-numbers-library/src/decimal.h"

TEST(decimal,test1)
{
    Decimal *f1 = new Float<64>(9,7);
    Decimal *fix = new Fixed<10,22>(1,2);
}

TEST(decimal,add)
{
    Decimal *f1 = new Float<32>(9,2);
    Decimal result = *f1 + *f1;
    Decimal *expected = new Float<32>(18,2);
    ASSERT_EQ((result),(*expected));
}