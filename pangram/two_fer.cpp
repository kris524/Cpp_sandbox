#include "two_fer.h"
#include <string>
#include <iostream>
#include <sstream>

namespace two_fer
{
    std::string two_fer(std::string name ){
        std::stringstream ss;
        ss << "One for " << name<< ", one for me.";
        return ss.str();
    }   
} 

