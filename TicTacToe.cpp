#include <iostream>
#include <vector>
#include <string>
//Tic Tac Toe by Trevor Green and Umar Haroon
//Trevor is person 1 and Umar is person 2
std::vector<std::vector<std::string>> CreateBoard ()
{
   return std::vector<std::vector<std::string>> (3, std::vector<std::string>(3, "n"));
}
std::ostream& operator<<(std::ostream& os, const std::vector<std::vector<std::string>>& board)
{
    os<<"---Tic Tac Toe board---"<<std::endl;
    os<<"-----------------------"<<std::endl;
    for(unsigned int i=0;i<board.size();i++)
    {
      for(unsigned int j=0;j<board.at(0).size();j++)
      {
        os << board.at(i).at(j) <<" ";
      }
      os<<std::endl;
    }
    return os;
}

int main()
{
  std::vector<std::vector<std::string>> new_board=CreateBoard();
  new_board[1][1]="X";
  std::cout<<new_board<<std::endl;
}
