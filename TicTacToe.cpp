#include <iostream>
#include <vector>
#include <string>
//Tic Tac Toe by Trevor Green and Umar Haroon
//Trevor is person 1 and Umar is person 2

std::vector<std::vector<std::string> > CreateBoard ()
{

   return std::vector<std::vector<std::string> > (3, std::vector<std::string>(3, ""));
}
void GetPlayerChoice(std::vector<std::vector<std::string> > &board) {
  int input;
  std::cout << "enter a value from 1-9. like a numpad, 1 is top left, 9 is bottom right" << std::endl;
  std::cin >> input;
  std::string value;
  std::cout << "Enter X or O: ";
  std::cin >> value;
  PlaceMarker(board, input, value);
}

void DisplayBoard(std::vector<std::vector<std::string> > *vec) {
  
  int row_count = 0;
  for (std::vector<std::string> row: *vec) {
    int col_count = 0;
    for (std::string col: row) {
      std::cout << " " << col;
      if (col_count < 2) {
        std::cout << " | ";
        col_count++;
      }
    }
    std::cout << std::endl;
    if (row_count < 2) {
      std::cout << "--|---|-- " << std::endl;
      row_count ++;
    }
  }
}

int main()
{
  std::vector<std::vector <std::string> > new_board=CreateBoard();
  // DisplayBoard(new_board);

  DisplayBoard(&new_board);
  for (int i = 0; i < 9; i++) {
  GetPlayerChoice(new_board);
  DisplayBoard(&new_board);
  }
}
