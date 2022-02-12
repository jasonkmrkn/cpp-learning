#include <iostream>

//figure it out, if a function could just use a default parameter value or if it needs Overloading.
// prioritize to use default arguments first because it's more simple than overloading a function.


//we can use the default parameter value instead, to give a default value to int power.
double pow(double base, int power = 2){
    int total = 1;
    for(int i = 0; i < power; i++){
        total *= base;
    }
    return total;
}

//overloading the function pow() so we can make the "int power" optional.
//double pow(double base){
//    return base*base;
//}


int main() {

    std::cout << pow(3,3) << std::endl;
    std::cout << pow(3) << std::endl;
    return 0;
}
