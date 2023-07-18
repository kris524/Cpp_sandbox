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
void clear() {
  ofstream ofs;
  ofs.open("task.txt", ofstream::out | ofstream::trunc);
  ofs.close();
}

void remove_task(int x) {
  ifstream file("task.txt");
  if (file.is_open()) {
    string line;
    for (int ln = 1; getline(file, line); ln++) {
      if (ln == x) {
        line.replace(line.find(line), line.length(), "");
      }
    }
    file.close();
  }
}

} // namespace todo