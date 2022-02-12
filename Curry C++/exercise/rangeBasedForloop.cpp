#include <iostream>
#include <vector>
#include <array>


//Array
// int main(){
//     int data[] = {1, 2, 3, 4, 5, 6};

//     for(int n : data){
//         std::cout << n << "\t";
//     }

//     // for(int i = 0; i < 6; i++){
//     //     std::cout << data[i] << "\t";
//     // }
//     // std::cout << "\n";
// }


//Vector
// int main(){
//     std::vector<int> data = {1, 2, 3, 4, 5, 6};

//     for(int n : data){
//         std::cout << n << "\t";
//     }
// }


//STL
int main(){
    std::array<int,10> data = {1, 2, 3, 4, 5, 6};
    int index = 0;
    for(int n : data){
        if(index < 6){
            std::cout << n << "\t";
            index++;
        }else{
            break;
        }
        
    }
}