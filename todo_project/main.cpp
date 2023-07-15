#include "include/Task.h"
#include <iostream>
using namespace std;

int main(int argc, char **argv) {
  
    

    string arg1 = argv[1];

    string arg2 = argv[2];

  if (arg1 == "add") {
    todo::add(arg2);
  }

  if (arg1 == "show") {
    todo::show();
  }
}
