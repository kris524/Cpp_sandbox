#include <iostream>
#include <sstream>
#include <string>
using namespace std;

vector<string> global_vec;

void add(string A) {
    global_vec.push_back(A);
}

void show(){
    for (const auto &elem : global_vec ){
        cout<< elem << " ";
    }

}

