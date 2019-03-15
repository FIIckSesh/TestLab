#ifndef FUNC_TEST_H
#define FUNC_TEST_H

#include <gtest/gtest.h>

extern "C" {
#include "myfunc.h"
}

TEST(FuncTest, num_0) {
  ASSERT_EQ(sqrFunc(1, 4, 4).count, 2);
  ASSERT_NEAR(sqrFunc(1, 4, 4).x1, -2.00, 0.001);
  ASSERT_NEAR(sqrFunc(1, 4, 4).x2, -2.00, 0.001);
}

TEST(FuncTest, num_1) {
  ASSERT_EQ(sqrFunc(1, 1, 4).count, 0);
}

TEST(FuncTest, num_2) {
  ASSERT_EQ(sqrFunc(0, 0, 2).count, 0);
}

TEST(FuncTest, num_3) {
  ASSERT_EQ(sqrFunc(0, 2, 2).count, 1);
  ASSERT_NEAR(sqrFunc(0, 2, 2).x1, -1.00, 0.001);
}

TEST(FuncTest, num_4) {
  ASSERT_EQ(sqrFunc(0, 0, 1).count, 0);
}

#endif // FUNC_TEST_H
