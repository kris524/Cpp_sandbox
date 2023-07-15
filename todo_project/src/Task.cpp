#include "../include/Task.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

namespace todo {

void add(string A) {
  ofstream file;
  file.open("task.txt", ios::app);
  file << A << "\n";
  file.close();
}

void show() {
  string line;
  ifstream file("task.txt");
  if (file.is_open()) {
    while (getline(file, line)) {
      cout << line << "\n";
    }
    file.close();
  } else
    cout << "Unable to open file";
}
} // namespace todo