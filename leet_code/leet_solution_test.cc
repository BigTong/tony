// Copyright 2014-10-15 The Tony Authors. All Rights Reserved.
// Author: rentong_zhang@staff.easou.com (Rentong Zhang)

#include <string>

#include "thirdparty/gtest/gtest.h"
#include "tony/leet_code/leet_solution.h"

namespace tony {

TEST(LeetCodeUnittest, ReverseString) {
  Solution solution;

  // reverse string
  std::string test("abcdefg");
  solution.ReverseWords(&test);
  EXPECT_EQ(test, "gfedcba");

  // max product
  int a[] = {2,3,-2,4};
  EXPECT_EQ(solution.MaxProduct(a, 4), 6);
}
}
