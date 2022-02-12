#include <iostream>
#include <fstream>
#include <string>
#include <vector>

// int main(){
//     std::ifstream file ("boo.txt"); // reading a file with ifstream won't create the file, unlike ofstream that create the file.
//                                         if the file is not exist it won't work.
//     std::vector<std::string> names;
//     std::string input; //the type of input or buffer var, will determine how the "file >> input" works. For example, if the input var type is char, it'll store each character as an input rather than one word.
//     while (file >> input){
//         names.push_back(input);
//     }

//     for(std::string name : names){
//         std::cout << name << "\n";
//     }

//     return 0;
// }


//using getline

int main(){
    std::ifstream file ("boo.txt");
    if(file.is_open()){
        std::cout << "file found!\n";
    }
    std::string line;
    getline(file, line);
    std::cout << line << "\n";
}