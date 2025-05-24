#include <gtest/gtest.h>

#include "/home/artush/main/c++ project/homework/Decimal numbers library/src/float_fixed.h"

TEST(floating,add_float)
{
    floating<float> a(1.5);
    floating<float> b(2.0);
    a.add(b);
    EXPECT_EQ(a.get_value(),3.5);
}

TEST(floating,add_double)
{
    floating<double> a(3.8);
    floating<double> b(-1.9);
    b.add(a);
    EXPECT_EQ(b.get_value(),1.9);
}

TEST(floating,sub_float)
{
    floating<float> a(13.3);
    floating<float> b(7.3);
    a.subtract(b);
    EXPECT_EQ(a.get_value(),6.0);
}

TEST(floating,sub_double)
{
    floating<double> a(1.35);
    floating<double> b(0.01);
    b.subtract(a);
    EXPECT_DOUBLE_EQ(b.get_value(),-1.34);
}

TEST(floating,mul_float)
{
    floating<float> a(6.7);
    floating<float> b(3.4);
    a.multiply(b);
    EXPECT_FLOAT_EQ(a.get_value(),22.78);
}

TEST(floating,div_double)
{
    floating<double> a(45);
    floating<double> b(14.4);
    a.divide(b);
    EXPECT_FLOAT_EQ(a.get_value(),3.125);
}


TEST(floating,floating_div_0_Test)
{
    floating<double> a(45);
    floating<double> b(0);
    a.divide(b);
    EXPECT_EQ(a.get_value(),45);
    EXPECT_EQ(b.get_value(),0);
}