
#include <unordered_map>
#include <iostream>

template<typename Key, typename Value>
class CustomHashMap {

    private:
        std::unordered_map<int, int> custom_map;

    public:
        void insert(int x , int y) {
            custom_map[x] = y;
        }

        int get(const int& x){
            return custom_map[x];
        }

        void addToKey(const int& num){
            for (auto& i:custom_map){
                std::cout << (i.first) << std::endl;
                int new_key = i.first;
                int same_value = i.second;
                new_key += num;
                custom_map[new_key] = same_value;
                // custom_map.erase(i.first);
            }
        }


        void addToVal(const int& num){
            for (auto& i:custom_map){
                i.second += num;
            }
        }

        void showData(){
            for(auto& i:custom_map){
                std::cout<<"("<<i.first<<": "<<i.second<<")"<<std::endl;
            }
        }


};

int main(){

    CustomHashMap<int, int> custom_map;

    custom_map.insert(1,2);
    custom_map.insert(2,3);

    custom_map.showData();

    custom_map.addToKey(1);
    custom_map.addToVal(1);

    custom_map.showData();

}
