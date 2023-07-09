#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
std::vector<int> invert(std::vector<int> values) {
  std::vector<int> res = {};
  for (int i = 0; i < values.size(); i++) {
    int ans = values[i] * (-1);
    res.push_back(ans);
  }
  return res;
}

std::string reverse_words(std::string str) {

    std::stringstream ss(str);
    std::string word;
    std::string result;

    while (std::getline(ss, word, ' ')){
        // if (!word.empty()){
        std::cout<< word << std::endl;
        reverse(word.begin(), word.end());
        result+= word+ ' ';
        
    }
    bool endingSpace = (str.back() == ' ');
    if (endingSpace){
        result.pop_back();
        result += ' ';
    }
    return result;

}
