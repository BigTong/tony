// Copyright 2014-10-15 The Tony Authors. All Rights Reserved.
// Author: rentongzh@gmail.com (Rentong Zhang)

#include <limits>

#include "tony/leet_code/leet_solution.h"

namespace tony {

void Solution::ReverseWords(std::string* words) {
  if (words->length() <=1) {
    return;
  }

  size_t count = words->length() >> 1;
  char tmp;
  for(size_t i = 0; i != count; i++) {
    tmp = (*words)[i];
    (*words)[i] = (*words)[words->length()-i-1];
    (*words)[words->length()-i-1] = tmp;
  }
}

int Solution::MaxProduct(int array[], int len) {
  if (len < 1) {
    return std::numeric_limits<int>::min();
  }

  int negtive_min = array[0];
  int positive_max = array[0];
  int max = array[0];

  int tmp;
  for (int i = 1; i != len; i++) {
    if (array[i] > 0) {
      negtive_min *= array[i];
      positive_max *= array[i];

      if (negtive_min == positive_max) {
        positive_max = array[i];
      }

      if (positive_max > max) {
        max =  positive_max;
      }
    } else if (array[i] < 0) {
      tmp = negtive_min;
      negtive_min = positive_max * array[i];
      positive_max = tmp * array[i];

      if (negtive_min == positive_max) {
        negtive_min = array[i];
      }

      if (positive_max > max) {
        max = positive_max;
      }
    } else {
      negtive_min = array[i+1];
      positive_max = array[i+1];
      i++;

      if (0 > max) {
        max = 0;
      }

      if (positive_max > max) {
        max =  positive_max;
      }
    }
  }

  return max;
}
}
