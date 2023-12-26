#include<fstream>
#include<iostream>
#include<sstream>

using namespace std;


int count_words(string sentence) {

    int words = 0;
    int size = sentence.size();

    for (int i=0; i<size;i++){
        if (sentence[i] == ' '){
            words++;
        }
    }
    words  = words + 1;
    return words;
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

        if (flag == "-m") {
            ifstream file(text_file);
            int chr = 0;
            string line;
            while(getline(file, line)){
                chr += line.size();
            }
            cout << chr << endl;   
            
        }
    }

}