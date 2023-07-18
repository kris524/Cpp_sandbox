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
  string filename;

  fstream read_file;
  read_file.open("task.txt");
  vector<string> lines;
  string line;
  while (getline(read_file, line)) {
    lines.push_back(line);
  }
  read_file.close();

  if (x > lines.size()) {
    cout << "Line is out of range";
  }

  ofstream write_file;
  write_file.open("task.txt");

  for (int i = 0; i < lines.size(); i++) {
    if (i != x)
      write_file << lines[i] << endl;
  }

  write_file.close();
}

} // namespace todo