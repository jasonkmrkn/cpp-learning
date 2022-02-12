#include <iostream>
#include <vector>
//swap between 2 variables

//function to swap
//we used the '&' sign, so it'll pass by reference. So, the original variable will be changed.
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    std::cout << "a : " << a << "\tb : " << b << std::endl;
}

int main(){
    int a = 10;
    int b = 20;

    swap(a,b);
    std::cout << "a : " << a << "\tb : " << b << std::endl;
    return 0;
}