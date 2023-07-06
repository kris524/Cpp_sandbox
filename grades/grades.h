#if !defined(GRADE_SCHOOL_H)
#define GRADE_SCHOOL_H
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

namespace grade_school {

class school {
public:
  void add(std::string a, int x);
  std::map<int, std::vector<std::string> > roster() const;
  std::vector<std::string> grade(int x);

private:
  std::map<int, std::vector<std::string> > result;
};

} // namespace grade_school

#endif // GRADE_SCHOOL_H