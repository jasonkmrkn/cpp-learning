#include <iostream>
#include <vector>
//multidimensional array and vector.

//multidimensional array
//int main(){
//    int grades[][3] = {
//            {1,2,3},
//            {4,5,6},
//            {7,8,9}
//            };
//
//    for (int i = 0; i < 3; i++){
//
//        for(int k = 0; k < 3; k++){
//        std::cout << grades[i][k] << "\t";
//        }
//        std::cout << "\n";
//    }
//    return 0;
//}

//multidimensional vector.
int main(){
    std::vector<std::vector <int>> grades = {{1,2,3}, {4,5,6}, {7,8,9}};

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            std::cout << grades[i][j] << "\t";
        }
        std::cout << "\n";
    }
}