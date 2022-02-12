#include <iostream>

struct Rectangle{
    double length;
    double width;
};

double area(double length, double width){
    return length*width;
}

double area(double length){
    return length*length;
}

double area(Rectangle rectangle){
    return rectangle.length*rectangle.width;
}

double pow(double base, int power = 2){
    int total = 1;
    for(int i = 0; i < power; i++){
        total *= base;
    }
    return total;
}

int main() {
      std::cout << pow(3,3) << std::endl;
      std::cout << pow(3) << std::endl;
//    Rectangle rectangle;
//    rectangle.length = 10;
//    rectangle.width = 10;
//    std::cout << area(rectangle.length, rectangle.width) << "\n"; //this function call will refer to the area() function that needs 2 arguments.
//    std::cout << area(rectangle.length) << "\n"; // this function call will refer to the area() function that only need one argument.
//    std::cout << area(rectangle) << "\n"; // this function call will refer to the area() function that need the "Rectangle" object.
    return 0;
}