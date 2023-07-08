#include "grades.h"
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
 
namespace grade_school {
  
void school::add(string a, int x) { 
    result[x].push_back(a);
    sort(result[x].begin(), result[x].end());
 }
 
map<int, vector<string> > school::roster() const { return result; }

vector<string> school::grade(int x) const { 
    auto f = result.find(x);
    if (f != result.end()){
        return f-> second;
    }
    else {
        return vector<string>();
    }
}

} // na mespace grade_school

