#if !defined(GRADE_SCHOOL_H)
#define GRADE_SCHOOL_H
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

namespace grade_school {

class school {
  std::map<int, std::vector<std::string>> result;

public:
  school() = default;
  void add(const std::string a, int x);
  std::map<int, std::vector<std::string>> roster() const;
  std::vector<std::string> grade(int x) const;
};

} // namespace grade_school

#endif // GRADE_SCHOOL_H