#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"

#include "add.hpp"

TEST(AddTest, AddThreeFourEvaluate) {
    Base* three = new Op(3);
    Base* four = new Op(4);
    Base* add = new Add(three, four);
    EXPECT_EQ(add->evaluate(), 7.0 );
}
TEST(AddTest, SingleNegEvaluate) {
    Base* three = new Op(3);
    Base* negFour = new Op(-4);
    Base* add = new Add(three, negFour);
    EXPECT_EQ(add->evaluate(), -1.0 );
}
TEST(AddTest, DoubleNegEvaluate) {
    Base* negThree = new Op(-3);
    Base* negFour = new Op(-4);
    Base* add = new Add(negThree, negFour);
    EXPECT_EQ(add->evaluate(), -7.0 );
}
TEST(AddTest, AddzeroEvaluate) {
    Base* zero = new Op(0);
    Base* four = new Op(4);
    Base* add = new Add(zero, four);
    EXPECT_EQ(add->evaluate(), 4.0 );
}
TEST(AddTest, AddStringify){
   Base *three = new Op(3);
   Base* four = new Op(4);
   Base* add = new Add(three,four);
   EXPECT_EQ(add->stringify(), "(3.0+4.0)");
}
#endif //__ADD_TEST_HPP__
