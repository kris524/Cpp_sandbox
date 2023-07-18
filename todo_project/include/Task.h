#if !defined(TASK_H)
#define TASK_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

namespace todo {

void add(string);

void show();

void clear();
void remove_task(int);

} // namespace todo

#endif // TASK_H