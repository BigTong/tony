// Copyright 2014-10-15 The Tony Authors. All Rights Reserved.
// Author: rentongzh@gmail.com (Rentong Zhang)

#ifndef TONY_LEET_CODE_LEET_SOLUTION_H_
#define TONY_LEET_CODE_LEET_SOLUTION_H_

#include <string>
#include <vector>

namespace tony {

class Solution {
 public:
  void ReverseWords(std::string* word);
  int MaxProduct(int* array, int len);
  int FindMin(const std::vector<int>& data);
};
}  // end of namespace tony
#endif  // TONY_LEET_CODE_LEET_SOLUTION_H_
