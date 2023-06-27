#include <string>
class Triangle {
public:
  static int otherAngle(int a, int b){
        return 180 - (a+b);
  }
};


bool feast(std::string beast, std::string dish){
  
    char firstChar = beast[0];
    char lastChar = beast.back();

    char firstfoodChar = dish[0];
    char lastfoodChar = dish.back();
    if (firstChar == firstfoodChar && lastfoodChar==lastChar){
        return true;
    }
    else{
        return false;
    }

}