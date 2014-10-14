// Copyright 2014-10-15 The Tony Authors. All Rights Reserved.
// Author: rentong_zhang@staff.easou.com (Rentong Zhang)

#include <string>

#include "thirdparty/gtest/gtest.h"
#include "tony/leet_code/reverse_string.h"

namespace tony {

TEST(LeetCodeUnittest, ReverseString) {
  ReverseString reverse_string;
  std::string test("abcdefg");
  reverse_string.ReverseWords(&test);
  EXPECT_EQ(test, "gfedcba");
}
}
