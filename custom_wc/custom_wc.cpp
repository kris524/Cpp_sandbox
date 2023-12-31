#include<fstream>
#include <ios>
#include<iostream>
#include<sstream>
#include<cstring>
#include <string.h>


using namespace std;


int count_words(string sentence) {

    int str_len = sentence.size();
    int count_words = 0;
    char delimiters[] = " .,;\n\t";

    for(int i=0; i<str_len;i++){

        while (i<str_len){

            if(strchr(delimiters, sentence[i]) != NULL){
                break;
            i++;
            }
        }
        count_words ++;

        while (i<str_len){
        
            if(strchr(delimiters, sentence[i]) == NULL){
                break;

            i++;
            }
        }

    }
    return count_words;

}


int main(int argc, char* argv[]) {

    if (argc>2){
    string flag = argv[1];
    string text_file = argv[2];
        if ( flag == "-c"){
            
            ifstream file(text_file, ios::binary);
            file.seekg(0, ios::end);
            int file_size = file.tellg();
            cout<< file_size << " " << text_file << endl;
        }

        if (flag == "-l") {
            ifstream file(text_file);
            int line_count = 0;
            string line;
            while(getline(file, line)){
                line_count+=1;
            }

            cout<< line_count << " " << text_file << endl;
        }

        if (flag == "-w") {
            ifstream file(text_file);
            int words = 0;
            string line;
            while(getline(file, line)){
                words += count_words(line);
            }
            cout << words << endl;   
            
        }

        // if (flag == "-m") {
        //     string line;
        //     int count = 0;
        //     ifstream file(text_file);
        //     while(getline(file, line)){
        //     cout << line << endl;

        //     }
            
        // }
    }

}