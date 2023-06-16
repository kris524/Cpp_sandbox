#include "triangle.h"
#include <stdexcept>

namespace triangle {
    using namespace std;    
      
    flavor kind(double s1, double s2, double s3){
        if((s1 + s2 < s3) || (s2 + s3 < s1) || (s3 + s1 < s2)){
            throw domain_error("Check for triangle inequality");
        }

        if (s1 <= 0 || s2 <= 0 || s3<=0 ){
            throw domain_error("All sides should be greater than 0");
        }
        if (s1 == s2 && s1 == s3 && s2==s3 ){
            return triangle::flavor::equilateral;
        }
        else if(s1 == s2 || s1 == s3 || s2==s3 ){
            return triangle::flavor::isosceles;

        }
        else{
            return triangle::flavor::scalene;

        }
    }
}  // namespace triangle
