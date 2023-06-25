#include<iostream>
#include<algorithm>
using namespace std;

int* reverseArray(int* array, int size){
    
    int values = *array;
    int* res=NULL;
    res = new int;
    reverse(values, values+size);
    *res = values;
    return res;

}

