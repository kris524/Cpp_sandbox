#include "triangle.h"

namespace triangle {
    using namespace std;

    enum class flavour{
        equilateral,
        isosceles,
        scalene
    };
    
      
    flavour kind(double s1, double s2, double s3){
        if (s1 == s2 && s1 == s3 && s2==s3 ){
            return triangle::flavour::equilateral;
        }
        else if(s1 == s2 || s1 == s3 || s2==s3 ){
            return triangle::flavour::isosceles;

        }
        else{
            return triangle::flavour::scalene;

        }
    }
}  // namespace triangle
