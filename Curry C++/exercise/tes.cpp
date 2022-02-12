#include <iostream>
#include <string>

int main(){
    int answer = 10;
    std::cout << "Guess the number! : ";
    int guess;
    std::cin >> guess;
    int points = guess == answer ? 10 : 0;
    std::cout << "\nYour points are : " << points;

    return 0;
}
