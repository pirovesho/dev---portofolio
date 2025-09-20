/*
Rock Paper Scissors Lizard Spock
(The Big Bang Theory)
*/

#include <iostream>
#include <cstdlib>
#include <ctime>


int main(){
  //Prompt the user to select a choice
  std::cout << "======================================\n";
  std::cout << "rock   paper  scissors  lizard  spock!\n";
  std::cout << " ✊      ✋       ✌️       🦎      🖖\n";
  std::cout << "======================================\n";

  std::cout << "1) Rock ✊\n";
  std::cout << "2) Paper ✋\n";
  std::cout << "3) Scissors ✌️\n";
  std::cout << "4) Lizard 🦎\n";
  std::cout << "5) Spock 🖖\n";
  std::cout << "======================================\n";

  std::cout << "shoot! \n\n";

  //Initialize user'c choice
  int user = 0;

  // Score tracking for both players
  int computer_points, user_points;
  computer_points = 0;
  user_points = 0;


  // Game loop for 5 rounds
  for (int i = 1; i <= 5; i++){
      // Initialize random number generator for computer choices each round
      srand (time(NULL));
      
      // Generate computer's choice (1 to 5)
      int computer = rand() % 5 + 1;


      std::cout << "Round " << i << "\n\n";

      std::cout << " 🫵    :   💻\n";
      std::cout << " " << user_points << "    :   " << computer_points << "\n\n";

      std::cout << "Your choice: ";
      std::cin >> user;

      // Check if user entered a valid choice (1 to 5)
      if (user > 5 || user < 1){
        do{
          std::cout << "\n\nThe choice should be number between 1-5. Try again: \nYour choice:";
          std::cin >> user;
        }while (user > 5 || user < 1);
      }

      std::cout << "\n\n";

      // Show the user’s selected choice
      if (user == 1){
        std::cout << "You are Rock ✊\n";
      }else if (user == 2){
        std::cout << "You are Paper ✋\n";
      }else if (user == 3){
        std::cout << "You are Scissors ✌️\n";
      }else if (user == 4){
        std::cout << "You are Lizard 🦎\n";
      }else{
        std::cout << "You are Spock 🖖\n";
      }

      // Show the computer’s selected choice
      if (computer == 1){
        std::cout << "Computer is Rock ✊\n";
      }else if (computer == 2){
        std::cout << "Computer is Paper ✋\n";
      }else if (computer == 3){
        std::cout << "Computer is Scissors ✌️\n";
      }else if (computer == 4){
        std::cout << "Computer is Lizard 🦎\n";
      }else{
        std::cout << "Computer is Spock 🖖\n";
      }

      // Game logic: compare choices and assign points based on game rules
      if (user == computer){
        std::cout << "It's a tie!";
        std::cout << "Round " << i << " again\n";
        i--;
      }else if (user == 1){
        if (computer == 2){
          std::cout << "1️⃣ point for 💻 ! \n";
          computer_points++;
        }else if (computer == 3){
          std::cout << "1️⃣ point for 🫵 ! \n";
          user_points++;
        }else if (computer == 4){
          std::cout << "1️⃣ point for 🫵 ! \n";
          user_points++;
        }else{
          std::cout << "1️⃣ point for 💻 ! \n";
          computer_points++;
        }
      }else if (user == 2){
        if (computer == 1){
          std::cout << "1️⃣ point for 🫵 ! \n";
          user_points++;
        }else if (computer == 3){
          std::cout << "1️⃣ point for 💻 ! \n";
          computer_points++;
        }else if (computer == 4){
          std::cout << "1️⃣ point for 💻 ! \n";
          computer_points++;
        }else{
          std::cout << "1️⃣ point for 🫵 ! \n";
          user_points++;
        }
      }else if (user == 3){
        if (computer == 1){
          std::cout << "1️⃣ point for 💻 ! \n";
          computer_points++;
        }else if (computer == 2){
          std::cout << "1️⃣ point for 🫵 ! \n";
          user_points++;
        }else if (computer == 4){
          std::cout << "1️⃣ point for 🫵 ! \n";
          user_points++;
        }else{
          std::cout << "1️⃣ point for 💻 ! \n";
          computer_points++;
        }
      }else if (user == 4){
        if (computer == 1){
          std::cout << "1️⃣ point for 💻 ! \n";
          computer_points++;
        }else if (computer == 2){
          std::cout << "1️⃣ point for 🫵 ! \n";
          user_points++;
        }else if (computer == 3){
          std::cout << "1️⃣ point for 💻 ! \n";
          computer_points++;
        }else{
          std::cout << "1️⃣ point for 🫵 ! \n";
          user_points++;
        }
      }else if (user == 5){
        if (computer == 1){
          std::cout << "1️⃣ point for 🫵 ! \n";
          user_points++;
        }else if (computer == 2){
          std::cout << "1️⃣ point for 💻 ! \n";
          computer_points++;
        }else if (computer == 3){
          std::cout << "1️⃣ point for 🫵 ! \n";
          user_points++;
        }else{
          std::cout << "1️⃣ point for 💻 ! \n";
          computer_points++;
        }
      }

      std::cout << "\n\n";
  }

  //Show the final result
  if (computer_points > user_points){
    std::cout << "Computer Wins! 💻 🏅\n";
  }else{
    std::cout << "You Win! 🫵 🏅\n";
  }


}
