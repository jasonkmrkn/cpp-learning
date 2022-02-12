#include <iostream>
#include <limits>

void print_array(int array[], int size){
    for(int i = 0; i < size; i++){
        std::cout << array[i] << "\t";
    }
    std::cout << std::endl;
}

int main(){
    const int SIZE = 100;
    int guesses[SIZE];
    int count = 0;

    for(int i = 0; i < SIZE; i++){
        if (std::cin >> guesses[i]) {
            //input worked
            count++;
        }else{
            //invalid character
            std::cout << count << std::endl;
            break;
        }
    }

    print_array(guesses, count);
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return 0;
}