#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"

TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
    EXPECT_EQ(test->stringify(), "8");
}

TEST(OpMockTest, OpEvaluateSeven) {
    SevenOpMock* test = new SevenOpMock();
    EXPECT_EQ(test->evaluate(), 7.5);
    EXPECT_EQ(test->stringify(), "7.5");
}

TEST(OpMockTest, OpEvaluateNegSeven) {
    NegSevenOpMock* test = new NegSevenOpMock();
    EXPECT_EQ(test->evaluate(), -7.5);
    EXPECT_EQ(test->stringify(), "-7.5");
}

TEST(OpMockTest, OpEvaluateZero) {
    ZeroOpMock* test = new ZeroOpMock();
    EXPECT_EQ(test->evaluate(), 0);
    EXPECT_EQ(test->stringify(), "0");
}

#endif //__OP_TEST_HPP__
