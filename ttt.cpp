#include<iostream>
#include "ttt-fns.h"

int main() {
  // Variable defns
  std::string input = "123456789";
  char player, game_status;
  int position;

  // Heading
  title();
  
  // Input of first player
  std::cout << "Enter beginning player (X/O)" << "\n";
  std::cin >> player;
  player = toupper(player);

  // Building of grid 
  grid(input);


  // Accepting inputs
  game_status = game(input, player);

  // Game status (winner)
  if (game_status == 'D')
    std::cout << "\n" << "Game draw!" << "\n";
  else
    std::cout << "\n" << game_status << " won the game!" << "\n";

}

