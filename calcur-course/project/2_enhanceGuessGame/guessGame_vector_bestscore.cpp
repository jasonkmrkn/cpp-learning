#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>

void checkBestscoreFIle(){
    
}

void save_score(int guesses_count){
    //read the bestscore file
    std::ifstream input("bestscore.txt");
    //check if the file is opened
    if(!input.is_open()){
        std::cout << "Unable to read bestscore file!\n";
        return;
    }
    int bestscore;
    //input the bestscore from file to int bestscore.
    input >> bestscore;

    std::ofstream output("bestscore.txt");
    if(!output.is_open()){
        std::cout << "Unable to read bestscore file!\n";
        return;
    }

    if(guesses_count < bestscore){
        output << guesses_count;
        std::cout << "You've just set a new best score!\n";
    }else{
        output << bestscore;
        std::cout << "Best score : " << bestscore << "\n";
    }

}

void print_vector(std::vector<int> data){
    for(int i = 0; i < data.size(); i++){
        std::cout << data[i] << "\t";
    }
    std::cout << "\n";
}

void play_game(){

    std::vector <int> guesses;
    int guesses_count = 0; // var to count how many times user guess.

    int random = rand() % 251;
    std::cout << random << std::endl;
    std::cout << "Guess a number : ";

    while(true){
        int guess;
        std::cin >> guess;
        guesses_count++;
        guesses.push_back(guess); // to add all the user guess into guesses vector.

        if(guess == random){
            std::cout << "You Win!\n";
            break;
        }else if(guess < random){
            std::cout << "the number is too low!\n";
        }else{
            std::cout << "the number is too high!\n";
        }
    }
    save_score(guesses_count);
    std::cout << "You guess : " << guesses_count << " times.\n";
    std::cout << "Your guesses : ";
    print_vector(guesses);
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
                system("cls");
                return 0;
            case 1:
                system("cls");
                play_game();
                break;
        }
    }while (choice != 0);    
}