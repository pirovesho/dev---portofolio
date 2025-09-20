#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include "tic_tac_toe_functions.hpp"


//Display the playing field
void display_field(char field[], int player_1_wins, int player_2_wins){
    system("clear"); //if does not work try system("cls");

    std::cout << "Player 1: " << player_1_wins << "\n";
    std::cout << "Player 2: " << player_2_wins << "\n\n";

    std::cout << "-------------------------------------------------";
    std::cout << "\n";

    for (int i = 0; i < 3; i++){
        std::cout << "|";
        for (int j = 0; j < 3; j++){
            std::cout << "\t" << field[i * 3 + j] << "\t" << "|";
        }
        std::cout << "\n";
        std::cout << "-------------------------------------------------";
        std::cout << "\n";
    }
}

//Get the player input
int input(int player){
        int choice;

        std::cout << "Player " << player % 2 + 1 << " : ";
        std::cin >> choice;

        return choice;
}

//Check if the game has ended
bool end_game(char field[], int player, int* player_1_wins, int* player_2_wins){
    // If less than 5 moves have been made, the game cannot be over
    if(player < 4){
        return false;
    }else if (player == 9){ // If all 9 moves have been made and no winner, it's a tie
        display_field(field, *player_1_wins, *player_2_wins);
        std::cout << "\nIt's a tie! 🤝\n";
        return true;
    }

    // Check all winning combinations
    if((field[0] == field[1] && field[1] == field[2]) || (field[0] == field[3] && field[3] == field[6])){
        if(field[0] == 'X'){
            (*player_1_wins) ++;
            display_field(field, *player_1_wins, *player_2_wins);
            std::cout << "\n" << "Player 1 Wins! 🏅\n\n";
        }else{
            (*player_2_wins)++;
            display_field(field, *player_1_wins, *player_2_wins);
            std::cout << "\n" << "Player 2 Wins! 🏅\n\n";
        }
        return true;
    }

    if((field[8] == field[5] && field[5] == field[2]) || (field[8] == field[7] && field[7] == field[6])){
        if(field[8] == 'X'){
            (*player_1_wins) ++;
            display_field(field, *player_1_wins, *player_2_wins);
            std::cout << "\n" << "Player 1 Wins! 🏅\n\n";
        }else{
            (*player_2_wins) ++;
            display_field(field, *player_1_wins, *player_2_wins);
            std::cout << "\n" << "Player 2 Wins! 🏅\n\n";
        }
        return true;
    }

    if((field[4] == field[3] && field[4] == field[5]) || (field[4] == field[1] && field[1] == field[7]) || (field[4] == field[2] && field[2] == field[6]) || (field[4] == field[0] && field[0] == field[8])){
        if(field[4] == 'X'){
            (*player_1_wins) ++;
            display_field(field, *player_1_wins, *player_2_wins);
            std::cout << "\n" << "Player 1 Wins! 🏅\n\n";
        }else{
            (*player_2_wins) ++;
            display_field(field, *player_1_wins, *player_2_wins);
            std::cout << "\n" << "Player 2 Wins! 🏅\n\n";
        }
        return true;
    }

    return false;

}

//Check if the chosen place in the field is free
bool check_if_free(char field[], int choice){
    if(field[choice - 1] == 'X' || field[choice - 1] == 'O'){
        std::cout << "\nSpot already taken!\n";
        return false;
    }
    return true;
}