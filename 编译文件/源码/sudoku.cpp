


#include <iostream>
using namespace std;

// 4 * 4 sudoku
int solution_board[4][4] = {
   {1,3,2,4},
   {2,4,3,1},
   {4,2,1,3},
   {3,1,4,2}
};

int board[4][4];

bool boardWin() {
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (board[i][j] != solution_board[i][j]) {
        return false;
      }
    }
  }
  return true;
}

bool boardFilled() {
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (board[i][j] == 0) {
         return false;
      }
    }
  }
  return true;
}

void printIntro() {
  cout << "This is 4 × 4 Sudoku." << endl;
  cout << "You will be shown an incomplete Sudoku board." << endl;
  cout << "Your task is to complete the board by filling in the blank with numbers." << endl;
  cout << "Each row, column, and two by two box should have a sequence of numbers from 1 through 4." << endl;
  cout << "There will be no duplicate numbers on any row or any column." << endl;
  cout << "There will be no duplicates in the top, left, bottom, right 2×2 squares either." << endl;
  cout << "You will fill in the blanks by providing the coordinates of the space you want to fill, followed by numbers." << endl;
  cout << "The entire board will be checked at the end to determine if your board has been filled correctly." << endl;
  cout << "Good Luck." << endl;  
}

void generateBoard () {
// dam
}

void printBoard(int board[][4]) {
  cout << endl;
  for (int i = 0; i < 4; i++) {
    cout << "row " << i+1 << ": ";
    for (int j = 0; j < 4; j++) {
      if (board[i][j] == 0) {
        cout << "_";
      }
      else {
        cout << board[i][j];
      }
      if (j == 1) {
        cout << " ";
      }      
    }
    cout << endl;
    if (i == 1) {
       cout << "    " << endl; 
    }
  }
  cout << endl;
}

int main() {
  printIntro();
  board[0][3] = 4;
  board[1][1] = 4;
  board[2][2] = 1;
  board[3][0] = 3;
  printBoard(board);

  bool gameRun = true;
  while (gameRun) {
    // Take in player's input
    int x,y,val;
    while (true) {
      cout << "Enter a fill point. Type row, colum, value each separated by a space." << endl;
     cin >> x >> y >> val;
     if (x < 1 || y < 1 || val < 1 || x > 4 || y > 4 || val > 4) {
       cout << "Error, one or more index out of bound." << endl;      
     }
    else {
       break;
      }
  }
     // process the input
     board[x-1][y-1] = val;
     // redraw the board
  // 难道不可以在原board上update.
     printBoard(board);

     if (boardFilled()) {
       gameRun = false;
     }   
  }
     // Check the board
    // determine win or lose
    if (boardWin()) {
      cout << "Congrat, you solved it!" << endl;
    } else {
      cout << "Sorry, you lose." << endl;
    }
  }