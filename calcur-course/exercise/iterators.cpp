#include <iostream>
#include <vector>
#include <unordered_map>

int main() {
    /*
    std::vector<int> values = {1, 2, 3, 4, 5};

    for (int i = 0; i < values.size(); i++)
    {
        std::cout << values[i] << " ";
    }
    std::cout << std::endl;
    for (int data : values)
    {
        std::cout << data << " ";
    }
    std::cout << std::endl;

    for (std::vector<int>::const_iterator it = values.begin(); it != values.end(); it++)
    {
        std::cout << *it << std::endl;
    }*/

    using ScoreMap = std::unordered_map<std::string, int>;
    ScoreMap map;
    map["Jason"] = 5;
    map["Caleb"] = 2;

    for (ScoreMap::const_iterator it = map.begin(); it != map.end(); it++) {
        auto &key = it->first;
        auto &value = it->second;
        std::cout << key << value << std::endl;
    }

    //kv = key value
    for (auto kv: map) {
        auto &key = kv.first;
        auto &value = kv.second;
        std::cout << key << " = " << value << std::endl;
    }
    std::cout << std::endl;

    for (auto [key, value] : map)
    {
        std::cout << key << " = " << value << std::endl;
    }
}