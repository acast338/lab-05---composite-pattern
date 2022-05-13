#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "mult.hpp"

TEST(MultTest, ThreeFourEvaluate) {
    Base* three = new Op(3);
    Base* four = new Op(4);
    Base* mult = new Mult(three, four);
    EXPECT_EQ(mult->evaluate(), 12.0 );
}
TEST(MultTest, SingleNegEvaluate) {
    Base* negThree = new Op(-3);
    Base* four = new Op(4);
    Base* mult = new Mult(negThree, four);
    EXPECT_EQ(mult->evaluate(), -12.0 );
}
TEST(MultTest, DoubleNegEvaluate) {
    Base* negThree = new Op(-3);
    Base* negFour = new Op(-4);
    Base* mult = new Mult(negThree, negFour);
    EXPECT_EQ(mult->evaluate(), 12.0 );
}
TEST(MultTest, ZeroEvaluate){
    Base* zero = new Op(0);
    Base* four = new Op(4);
    Base* mult = new Mult(zero, four);
    EXPECT_EQ(mult->evaluate(), 0.0 );
}
TEST(MultTest, MultStringify){
   Base *three = new Op(3);
   Base* four = new Op(4);
   Base* mult = new Mult(three,four);
   EXPECT_EQ(mult->stringify(), "(3.0*4.0)");
}
#endif //__MULT_TEST_HPP__
