#include "include/Task.h"
#include <iostream>
using namespace std;

int main(int argc, char **argv) {

  if (argc == 2) {
    string arg1 = argv[1];
    if (arg1 == "show") {
      todo::show();
    }
    if (arg1 == "clear") {
      todo::clear();
    }
  }

  else if (argc > 2) {

    string arg1 = argv[1];
    string arg2 = argv[2];

    if (arg1 == "add") {

      if (arg1 == "add") {
        todo::add(arg2);
      }
    }

    else if (arg1 == "remove_task") {
      int x = stoi(arg2);
      todo::remove_task(x);
    } else if (arg1 == "complete") {
      int x = stoi(arg2);
      todo::complete(x);
    }
  }
}
