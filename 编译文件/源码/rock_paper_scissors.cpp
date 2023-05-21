


#include <iostream>
#include <string.h>
#include <ctime>
using namespace std;

// This program will be a text based rock paper scissors. 

void printIntro() {
  cout << "Welcome to text-based rock paper scissors. On the prompt, please type either 'rock', 'paper', or 'scissors' and then see if you win!" << endl;
}

// Compares the choices of the player and the computer to determine winner
int playerWin(string computer, string player) {
  if ((computer == "rock" && player == "paper") || (computer == "paper" && player == "scissors") || (computer == "scissors" && player == "rock")) {
    return 1;
  }
  else if ((computer == "rock" && player == "rock") || (computer == "paper" && player == "paper") || (computer == "scissors" && player == "scissors")) {
    return 3;
  }
  else {
    return 2;
  }
}

int main() {
  printIntro();

  bool gameRun = true;
  while (gameRun) {
    string choice;
    while (true) {
      cout << "Rock Paper Scissors Shoot! (Type your choice)" << endl;
      cin >> choice;
      if (choice != "rock" && choice != "paper" && choice != "scissors") {
        cout << "Error, could not understand, please try again. (use all lowercase please)" << endl;
      }
      else {
        break;
      }
    }
    string computerChoice;
    // seed the random
    srand(time(0));
    int random = rand() % 3;
    // setting the computer's choice
    if (random == 0) {
      computerChoice = "rock";
    }
    else if (random == 1) {
      computerChoice = "paper";
    }
    else {
      computerChoice = "scissors";
    }
    cout << "Computer shoots " + computerChoice + "!" << endl;

    // finding the result and displaying a message. 
    int result = playerWin(computerChoice, choice);
    if (result == 1) {
      cout << "You Win! :)" << endl;
    }
    else if (result == 2) {
      cout << "You Lose. :(" << endl;
    }
    else {
      cout << "Draw! :|" << endl;
    }

    // prompting to play again.
    cout << "Play again? (y/n)" << endl;
    char again;
    cin >> again;

    if (again == 'n') {
      break;
    }
  }

  cout << "Program Terminated" << endl;
  return 0;
}