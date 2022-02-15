#include <iostream>
#include <vector>

namespace utils{
    void printArray(const int data[], int size){
        for (int i = 0; i < size; i++) {
            std::cout << data[i] << "\t";
        }
        std::cout << "\n";
    }
}

int main(){
    int data[] = {1, 2, 3};
    utils::printArray(data, 3);
}
