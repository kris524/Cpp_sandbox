#include "grades.h"
#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

namespace grade_school {

void school::add(string a, int x) {
  result[x].push_back(a);
  sort(result[x].begin(), result[x].end());
}

map<int, vector<string>> school::roster() const { return result; }

vector<string> school::grade(int x) const {
  auto f = result.find(x);
  if (f != result.end()) {
    return f->second;
  } else {
    return vector<string>();
  }
}

} // namespace grade_school

int main() {
  auto a = grade_school::school();
  a.add("Josh", 1);
  map<int, vector<string>> my_map = {{1, {"Josh"}}};
  if (a.roster() == my_map) {
    cout << "true" << endl;
  }
}