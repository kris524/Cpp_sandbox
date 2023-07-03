#include "pangram.h"
#include <algorithm>
#include <cctype>
#include <iostream>
#include <set>
#include <string>

namespace pangram {

std::set<char> Set;

bool is_pangram(std::string str) {

  for (std::string::size_type i = 0; i < str.size(); i++) {
    char s = std::tolower(str.at(i));
    if (std::isalpha(s)) {
      Set.insert(s);
    }
  }
  if (Set.size() == 26) {
    return true;
  } else {
    return false;
  }
}

} // namespace pangram


