// Copyright 2014-10-15 The Tony Authors. All Rights Reserved.
// Author: rentong_zhang@staff.easou.com (Rentong Zhang)

#include <string>
#include <vector>

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
  int a[] = {-2, 0, -2, 4};
  EXPECT_EQ(solution.MaxProduct(a, 4), 4);

  int b[] = {-5, 6,-4, -1, 0, 5, 7};
  EXPECT_EQ(solution.MaxProduct(b, 7), 120);

  int tmp[] = {4,5,6,7,-2,-1,0,0,0,1,2};
  std::vector<int> data(tmp, tmp+10);
  EXPECT_EQ(solution.FindMin(data), 0);
}
}
