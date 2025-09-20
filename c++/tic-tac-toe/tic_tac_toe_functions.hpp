//Display the playing field
void display_field(char field[], int player_1_wins, int player_2_wins);

//Get the player input
int input(int player);

//Check if the game has ended
bool end_game(char field[], int player, int* player_1_wins, int* player_2_wins);

//Check if the chosen place in the field is free
bool check_if_free(char field[], int choice);