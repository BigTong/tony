// Copyright 2014-10-15 The Tony Authors. All Rights Reserved.
// Author: rentongzh@gmail.com (Rentong Zhang)

#include "tony/leet_code/reverse_string.h"

namespace tony {

void ReverseString::ReverseWords(std::string* words) {
  if (words->length() <=1) {
    return;
  }

  size_t count = words->length() / 2;
  char tmp;
  for(size_t i = 0; i != count; i++) {
    tmp = (*words)[i];
    (*words)[i] = (*words)[words->length()-i-1];
    (*words)[words->length()-i-1] = tmp;
  }
}
}
