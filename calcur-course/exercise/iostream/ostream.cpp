#include <iostream>
#include <string>
#include <vector>
#include <fstream>

int main(){
    std::string filename;
    std::getline(std::cin, filename); //to ask the filename from user, use ".txt"

    std::ofstream file (filename, std::ios::app); //std::ios::app is used to make the program to append on the txt file and not override the file.

    if(file.is_open()){     //to check if the file is successfully open or not.
        std::cout << "success\n";
    }else{
        std::cout << "failed\n";
    }

    std::vector<std::string> names;
    names.push_back("Caleb");
    names.push_back("Jason");
    names.push_back("Fakhri");

    for(std::string name : names){
        file << name << "\n";
    }

    file.close();
    return 0;
}