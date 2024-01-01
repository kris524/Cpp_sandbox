#include<fstream>
#include <ios>
#include<iostream>
#include<sstream>
#include<cstring>
#include <string.h>


using namespace std;


int count_words_given_sentence(string sentence) {

    int str_len = sentence.size();
    int count_words = 0;
    char delimiters[] = " .*[]123456789()_§,;\n\t";

    for(int i=0; i<str_len;i++){

        while (i<str_len){
        
            if(strchr(delimiters, sentence[i]) == NULL)
                break;
            i++;

        }

        while (i<str_len)
        {

            if(strchr(delimiters, sentence[i]) != NULL)
                break;
            i++;
        }
        count_words++;

        while (i<str_len){
        
            if(strchr(delimiters, sentence[i]) == NULL)
                break;
            i++;

        }

    }
    return count_words;

}

int byte_count(string text_file){
            
    ifstream file(text_file, ios::binary);
    file.seekg(0, ios::end);
    int file_size = file.tellg();
    return file_size;

}

int line_count(string text_file){
    ifstream file(text_file);
    int line_count = 0;
    string line;
    while(getline(file, line)){
        line_count+=1;
    }

    return line_count;

}

int count_words(string text_file){
    ifstream file(text_file);
    int words = 0;
    string line;
    while(getline(file, line)){
        words += count_words_given_sentence(line);
    }
    return words;

}

int count_characters(string text_file){
    ifstream file(text_file);
    int char_count = 0;
    char c;
    string line;
    while(getline(file, line)){
        char_count += line.length();
    }
    
    return char_count;

}


int main(int argc, char* argv[]) {

    if (argc>2){
    string flag = argv[1];
    string text_file = argv[2];
        if ( flag == "-c"){
            cout << byte_count(text_file) << " " << text_file << endl;
        }

        if (flag == "-l") {
            cout << line_count(text_file) << " " << text_file << endl;
        }

        if (flag == "-w") {
            cout << count_words(text_file) << " " << text_file << endl;
        }

        if (flag == "-m") {
            cout << count_characters(text_file) << " " << text_file << endl;
        }
    }

    else if (argc==2)
    {
        /* code */
        string text_file = argv[1];
        cout << byte_count(text_file) << " " << line_count(text_file) << " " << count_words(text_file)<< " " << text_file << endl;
    }
     

    

}