#include "space_age.h"
#include <iostream>

namespace space_age {
    const int earth_sec = 31557600;
    const int mercury_sec = 0.2408467 * earth_sec;
    const int venus_sec = 0.61519726 * earth_sec;
    const int mars_sec = 1.8808158 * earth_sec;
    const int jupyter_sec = 11.862615 * earth_sec;
    const int saturn_sec = 1.8808158 * earth_sec;
    const int uranus_sec = 84.016846 * earth_sec;
    const int neptune_sec = 164.79132 * earth_sec;

   long space_age::space_age(long sec) : sec(sec) {}

   long long space_age::seconds() const {
    return (sec);
   }

   double space_age::on_earth() const {
    return (sec/earth_sec)
   }

   double space_age::on_mercury() const {
    return (sec/mercury_sec)
   }
   double space_age::on_venus() const {
    return (sec/venus_sec)
   }
   double space_age::on_mars() const {
    return (sec/mars_sec)
   }
   double space_age::on_jupyter() const {
    return (sec/jupyter_sec)
   }
   double space_age::on_saturn() const {
    return (sec/saturn_sec)
   }
   double space_age::on_uranus() const {
    return (sec/uranus_sec)
   }
   double space_age::on_jupyter() const {
    return (sec/jupyter_sec)
   }


    
    
}  // namespace space_age


int main(){
    std::cout << space_age::earth_sec << std::endl;
}