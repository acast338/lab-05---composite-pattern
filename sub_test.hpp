#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"

#include "sub.hpp"

TEST(SubTest, SubFourThreeEvaluate) {
    Base* four = new Op(4);
    Base* three = new Op(3);
    Base* sub = new Sub(four, three);
    EXPECT_EQ(sub->evaluate(), 1.0 );
}
TEST(SubTest, SubStringify){
   Base *three = new Op(3);
   Base* four = new Op(4);
   Base* sub = new Sub(four,three);
   EXPECT_EQ(sub->stringify(), "(4.0-3.0)");
}
TEST(SubTest, SingleNegEvaluate) {
    Base* negFour = new Op(-4);
    Base* three = new Op(3);
    Base* sub = new Sub(negFour, three);
    EXPECT_EQ(sub->evaluate(), -7.0 );
}
TEST(SubTest, SubZeroEvaluate) {
    Base* four = new Op(4);
    Base* zero = new Op(0);
    Base* sub = new Sub(four, zero);
    EXPECT_EQ(sub->evaluate(), 4.0 );
}
#endif //__SUB_TEST_HPP__
