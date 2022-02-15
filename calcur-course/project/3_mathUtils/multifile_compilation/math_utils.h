//declaration

#ifndef UTILS
#define UTILS
struct Rectangle{
    double length;
    double width;
};

namespace utils{
    double area(double length, double width);
    double area(double length);
    double area(Rectangle rectangle);
    double pow(double base, int power = 2);
}
#endif