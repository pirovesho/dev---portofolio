#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include "tic_tac_toe_functions.hpp"

int main(){

    int play_again;
    int player_1_wins = 0, player_2_wins = 0;

    //Output the current result (0 - 0 st the start of the game)
    std::cout << "Player 1: " << player_1_wins << "\n";
    std::cout << "Player 2: " << player_2_wins << "\n\n";

    do{
    //Create the playing field
    char field[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

    int player = 0;
    int choice;

        //Game loop as long as the game has not ended
        while (end_game(field, player, &player_1_wins, &player_2_wins) == false){
        
        //Display the field
        display_field(field, player_1_wins, player_2_wins);
        
        //Get the player input
        choice = input(player);

        //Check if the place in the field is free
        if(check_if_free(field, choice) == false){
            continue;
        }

        //Set the field to X or O depending on the player
        if(player % 2 + 1 == 1){
            field[choice-1] = 'X';
        }else{
            field[choice - 1] = 'O';
        }

        //Switch player
        player++;
        }

        //Ask the user if want to play again
        std::cout << "\n\nPlay Again: \n";
        std::cout << "1. Yes\n";
        std::cout << "2. No\n";

        //Get the user input if want to play again
        std::cout << "\nChoose: ";
        std::cin >> play_again;
        std::cout << "\n\n";


    }while(play_again == 1);

    system("clear");
    std::cout << "\n\nTHANK YOU FOR PLAYING! 🤗🎮✨\n\n";


    

    return 0;
}
