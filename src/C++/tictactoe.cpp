#include <iostream>
#include <vector>
#include <string>

using namespace std;

void drawBoard(vector<string> board)
{
  cout << "\n " << board[0] << " | " << board[1] << " | " << board[2] << "\n";
  cout << "-----------\n";
  cout << " " << board[3] << " | " << board[4] << " | " << board[5] << "\n";
  cout << "-----------\n";
  cout << " " << board[6] << " | " << board[7] << " | " << board[8] << "\n";
}

bool checkWin(vector<string> board)
{
  vector<vector<int>> winCombos = {
      // horizontal
      {0, 1, 2},
      {3, 4, 5},
      {6, 7, 8},
      // vertical
      {0, 3, 6},
      {1, 4, 7},
      {2, 5, 8},
      // diagonal
      {0, 4, 8},
      {2, 4, 6}};

  for (int i = 0; i < winCombos.size(); i++)
  {
    vector<int> winCombo = winCombos[i];
    string first = board[winCombo[0]];
    string second = board[winCombo[1]];
    string third = board[winCombo[2]];

    if (first == second && second == third)
    {
      return true;
    }
  }

  return false;
}

int main()
{
  int move;
  vector<string> board = {"1", "2", "3", "4", "5", "6", "7", "8", "9"};

  cout << "Welcome to Tic-Tac-Toe!\n";
  cout << "\nPlayer 1 is X and Player 2 is O\n";
  cout << "\nPlayer 1 goes first\n";
  cout << "\nEnter a number from 1-9 to place your move\n";

  drawBoard(board);

  for (int i = 0; i < 9; i++)
  {
    if (i % 2 == 0)
    {
      cout << "\n\033[32mPlayer 1's turn\033[0m: ";
    }
    else
    {
      cout << "\n\033[31mPlayer 2's turn\033[0m: ";
    }

    cin >> move;
    move -= 1;

    while (board[move] == "\033[32mX\033[0m" || board[move] == "\033[31mO\033[0m")
    {
      cout << "\nThat spot is taken!\n";
      if (i % 2 == 0)
      {
        cout << "\n\033[32mPlayer 1's turn:\033[0m ";
      }
      else
      {
        cout << "\n\033[31mPlayer 2's turn:\033[0m ";
      }
      cin >> move;
      move -= 1;
    }

    if (i % 2 == 0)
    {
      board[move] = "\033[32mX\033[0m";
    }
    else
    {
      board[move] = "\033[31mO\033[0m";
    }

    drawBoard(board);

    if (checkWin(board))
    {
      if (i % 2 == 0)
      {
        cout << "\nPlayer 1 wins!\n";
      }
      else
      {
        cout << "\nPlayer 2 wins!\n";
      }
      break;
    }
    else if (i == 8)
    {
      cout << "\n\033[33mIt's a tie!\033[0m\n";
    }
  }
}