//includes function definitions
#include<iostream>
#include<vector>
#include<string>
#include<cctype>

void title() {
  std::cout << "===========\n";
  std::cout << "TIC-TAC-TOE\n";
  std::cout << "===========\n";
  std::cout << "\n";

}


void grid(std::string position) {

  std::cout << "\n";
  std::cout << " " << position[0] << " | " << position[1] << " | " << position[2] << " \n";
  std::cout << "----------" << "\n";
  std::cout << " " << position[3] << " | " << position[4] << " | " << position[5] << " \n";
  std::cout << "----------" << "\n";
  std::cout << " " << position[6] << " | " << position[7] << " | " << position[8] << " \n";

}

char game(std::string input, char player) {

  for (int i=1; i<=9; i++) {
    // var declaration
    int position;
    // std::vector<int> used;

    // Check for valid player
    if ((player != 'X' && player != 'O') && (player != 'x' && player != 'o')) {
      std::cout << "Invalid player!" << "\n";
      return 'D';
    }
      

    // Per player input 
    std::cout << "Player " << player << ", ";

    // Position of input
    std::cout << "enter input position: ";
    std::cin >> position;

    // Checking validity of position
    if ( position > 9 || position < 1 ) {
      std::cout << "\nInvalid position!\n";
      return 'D';
    }

    if ( input[position-1] != '1' && input[position-1] != '2' && input[position-1] != '3' && input[position-1] != '4' && input[position-1] != '5' && input[position-1] != '6' && input[position-1] != '7' && input[position-1] != '8' && input[position-1] != '9' ) {
      std::cout << "\ninvalid position!\n";
      return 'D';
    }
    
    // Storing inputs into grid
    input[position-1] = player;

    // Building grid again
    grid(input);

    // Check for win
    if ((input[0] == input[1] && input[1] == input[2]) || (input[3] == input[4] && input[4] == input[5]) || (input[6] == input[7] && input[7] == input[8]) || (input[0] == input[3] && input[3] == input[6]) || (input[1] == input[4] && input[4] == input[7]) || (input[2] == input[5] && input[5] == input[8]) || (input[0] == input[4] && input[4] == input[8]) || (input[6] == input[4] && input[4] == input[2])) {
      return player;
      break;
    }

    //Next player
    if (player == 'X' || player == 'x')
      player = 'O';
    else if (player == 'O' || player == 'o')
      player = 'X';
    else {
      std::cout << "Invalid play!" << "\n";
      break;
    }
  }

  // return result
  return 'D';
}
