#include<iostream>
#include <string.h>
using namespace std;
//ATTCGGGA
int longest_rep(string text){

    int str_len = text.size();
    int char_count = 1;
    int curr_max = 0;
    for(int i=1; i<str_len;i++){
        
        if(text[i] != text[i-1]){
            curr_max = max(char_count, curr_max);
            char_count=0;
        }   
        char_count++;

    }
    curr_max = max(char_count, curr_max);
    return curr_max;
}


int main() {

    string x;
    cin >> x;

    cout << longest_rep(x) << endl;

}



