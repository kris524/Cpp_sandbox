#include<fstream>
#include<iostream>

using namespace std;




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
            int line_count = 0;

            for(string line; getline(text_file, line, ' ');)
                cout << line << endl;
            
        }
    }

}