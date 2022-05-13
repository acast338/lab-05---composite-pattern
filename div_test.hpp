#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"

#include "div.hpp"

TEST(DivTest, DivTwelveFourEvaluate) {
    Base* twelve = new Op(12);
    Base* four = new Op(4);
    Base* div = new Div(twelve, four);
    EXPECT_EQ(div->evaluate(), 3.0 );
}
TEST(DivTest, DivStringify){
   Base *twelve = new Op(12);
   Base* four = new Op(4);
   Base* div = new Div(twelve,four);
   EXPECT_EQ(div->stringify(), "(12.0*/4.0)");
}
TEST(DivTest, SingleNegEvaluate){
   Base *twelve = new Op(12);
   Base* negFour = new Op(-4);
   Base* div = new Div(twelve,negFour);
   EXPECT_EQ(div->evaluate(), -3.0);
}
TEST(DivTest, DoubleNegEvaluate) {
    Base* negTwelve = new Op(-12);
    Base* negFour = new Op(-4);
    Base* div = new Div(negTwelve, negFour);
    EXPECT_EQ(div->evaluate(), 3.0 );
}
TEST(DivTest, DivbyOneEvaluate) {
    Base* twelve = new Op(12);
    Base* one = new Op(1);
    Base* div = new Div(twelve, one);
    EXPECT_EQ(div->evaluate(), 12.0 );
}
#endif //__DIV_TEST_HPP__
