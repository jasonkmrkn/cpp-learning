#include <iostream>

//to make a new type
struct Rectangle{
    double length;
    double width;
};

//function to calculate the area of a rectangle.
//we can't use default arguments here, so we need to make an overloading function.
double area(double length, double width){
    return length*width;
}

//an overload function to calculate the area of a square.
double area(double length){
    return length*length;
}

double area(Rectangle rectangle){
    return rectangle.length*rectangle.width;
}


int main() {
    Rectangle rectangle;
    rectangle.length = 10;
    rectangle.width = 10;
    std::cout << area(rectangle.length, rectangle.width) << "\n"; //this function call will refer to the area() function that needs 2 arguments.
    std::cout << area(rectangle.length) << "\n"; // this function call will refer to the area() function that only need one argument.
    std::cout << area(rectangle) << "\n"; // this function call will refer to the area() function that need the "Rectangle" object.
    return 0;
}
