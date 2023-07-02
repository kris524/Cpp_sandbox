#include "pangram.h"
#include <iostream>
#include <set>
#include <string>

namespace pangram {

std::set<char> Set;

bool is_pangram(std::string str) {

  for (int i = 0; i < str.size(); i++) {
    Set.insert(str.at(i));
  }
  if (Set.size() == 26) {
    return true;
  } else {
    return false;
  }
}

} // namespace pangram
