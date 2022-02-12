#include <iostream>
#include <string>

//function to swap int
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

//function to swap string
void swap(std::string &first, std::string &last){
    std::string temp = first;
    first = last;
    last = temp;
}

//main function
int main(){
    int a = 10;
    int b = 20;
    swap(a,b);
    std::cout << "a : " << a << "\tb : " << b << std::endl;

    std::string firstName = "Jason";
    std::string lastName = "Kumarkono";
    swap(firstName, lastName);
    std::cout << "first name : " << '"' << firstName << '"' << "  last name :" << '"' << lastName << '"';
}