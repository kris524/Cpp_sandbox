#include "grades.h"
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

namespace grade_school {

void school::add(string a, int x) { result[x].push_back(a); }

map<int, vector<string>> school::roster() const { return result; }
vector<string> school::grade(int x) { return result[x]; }

} // na mespace grade_school

