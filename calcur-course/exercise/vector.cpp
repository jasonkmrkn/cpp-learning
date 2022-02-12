#include <iostream>
#include <string>
#include <cstdlib>
#include <vector> 

int main(){
    std::vector<int> data = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    data.push_back(11);
    std::cout << data.back() << std::endl;
}
