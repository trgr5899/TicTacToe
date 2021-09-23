#include <iostream>
#include <vector>
std::vector<std::vector<std::string> > CreateBoard ()
{
   return std::vector<std::vector<std::string> > (3, std::vector<std::string>(3, ""));
}
void PlaceMarker(std::vector<std::vector<std::string> > &board, int input, std::string value) {
switch (input)
  {
  case 1:
    board[0][0] = value;
    break;

  case 2:
    board[0][1] = value;
    break;
  case 3:
    board[0][2] = value;
    break;

  case 4:
    board[1][0] = value;
    break;

  case 5:
    board[1][1] = value;
    break;

  case 6:
    board[1][2] = value;
    break;

  case 7:
    board[2][0] = value;
    break;

  case 8:
    board[2][1] = value;
    break;
  case 9:
    board[2][2] = value;
    break;

  default:
    break;
  }
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
