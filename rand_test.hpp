#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"

#include "rand.hpp"

TEST(RandTest, RandConstruction) {
    Rand* test = new Rand();
    double val = test->evaluate();
    EXPECT_TRUE((val>=0.0) && (val <= 99.0) );
}

#endif //__RAND_TEST_HPP__
