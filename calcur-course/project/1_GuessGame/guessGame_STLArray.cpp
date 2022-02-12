#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <array>

void print_array(std::array<int, 251> data, int index){
    for(int i = 0; i < index; i++){
        std::cout << data[i] << "\t";
    }
    std::cout << "\n";
}

void play_game(){
    std::array<int, 251> guesses; //declared STL Array for guesses
    int guess_count = 0;
    int random = rand() % 251;
    std::cout << random << std::endl;
    std::cout << "Guess a number : ";
    while(true){
        int guess;
        std::cin >> guess;

        guesses[guess_count++] = guess; //the same if guess_count++ written under the guesses[guess_count] = guess;

        if(guess == random){
            std::cout << "You Win!\n";
            break;
        }else if(guess < random){
            std::cout << "the number is too low!\n";
        }else{
            std::cout << "the number is too high!\n";
        }
    }
    std::cout << "Your guesses : ";
    print_array(guesses, guess_count);
}

int main(){
    srand(time(NULL));
    int choice; // declared outside the do scope so the while could reach the variable.

    do{
        std::cout << "1. Play game\n0. Quit\n";
        std::cin >> choice;
        switch (choice){
            case 0:
                std::cout << "Bye!";
                return 0;
            case 1:
                play_game();
                break;
    }
    }while (choice != 0);    
}