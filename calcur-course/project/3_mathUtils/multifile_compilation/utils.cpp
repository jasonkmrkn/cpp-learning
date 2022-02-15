//functions definitions
//if any of this functions are using the std library, you need to include it.

#include "utils.h"

double area(double length, double width){
    return length*width;
}

double area(double length){
    return length*length;
}

double area(Rectangle rectangle){
    return rectangle.length*rectangle.width;
}

//we moved the default value to the header file.
double pow(double base, int power /*= 2*/){
    int total = 1;
    for(int i = 0; i < power; i++){
        total *= base;
    }
    return total;
}
