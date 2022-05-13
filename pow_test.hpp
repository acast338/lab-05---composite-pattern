#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"

#include "pow.hpp"

TEST(PowTest, PowFourTwoEvaluate) {
    Base* two = new Op(2);
    Base* four = new Op(4);
    Base* pow = new Pow(four, two);
    EXPECT_EQ(pow->evaluate(), 16.0 );
}
TEST(PowTest, PowZeroEvaluate) {
    Base* zero = new Op(0);
    Base* four = new Op(4);
    Base* pow = new Pow(four, zero);
    EXPECT_EQ(pow->evaluate(), 1.0 );
}
TEST(PowTest, FourTwoStringify){
   Base* two = new Op(2);
   Base* four = new Op(4);
   Base* pow = new Pow(four,two);
   EXPECT_EQ(pow->stringify(), "(4.0**2.0)");
}
#endif //__POW_TEST_HPP__
