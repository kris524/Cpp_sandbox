#include<fstream>
#include<iostream>

using namespace std;

int main(int argc, char* argv[]) {

    if (argc>2){
    string count_arg = argv[1];
    string text_file = argv[2];
        if ( count_arg == "-c"){
            
            ifstream in_file(text_file, ios::binary);
            in_file.seekg(0, ios::end);
            int file_size = in_file.tellg();
            cout<< file_size << " " << text_file << endl;
        }
    }

}