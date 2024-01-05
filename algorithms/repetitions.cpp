#include<iostream>
#include <string.h>
using namespace std;
//ATTCGGGA
int longest_rep(string text){

    int str_len = text.size();
    int char_count = 1;
    int curr_max = 0;
    for(int i=0; i<str_len;i++){
        int j = i+1;
        while(j<str_len && text[i] == text[j]){
            char_count++;
            j++;
        }
        if (char_count > curr_max) {
            curr_max = char_count;
        }
        char_count = 1;

    }
    return curr_max;
}


int main() {

    string x;
    cin >> x;

    cout << longest_rep(x) << endl;

}



