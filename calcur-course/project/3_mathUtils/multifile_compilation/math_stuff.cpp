#include <iostream>
#include "math_utils.h"

int main() {
    std::cout << utils::pow(3,3) << std::endl;
    std::cout << utils::pow(3) << std::endl;
    Rectangle rectangle;
    rectangle.length = 10;
    rectangle.width = 10;
    std::cout << utils::area(rectangle.length, rectangle.width) << "\n"; //this function call will refer to the area() function that needs 2 arguments.
    std::cout << utils::area(rectangle.length) << "\n"; // this function call will refer to the area() function that only need one argument.
    std::cout << utils::area(rectangle) << "\n"; // this function call will refer to the area() function that need the "Rectangle" object.
    return 0;
}