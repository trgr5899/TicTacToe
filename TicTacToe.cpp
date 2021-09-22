#include <iostream>
#include <vector>
//Tic Tac Toe by Trevor Green and Umar Haroon 
//Trevor is person 1 and Umar is person 2
std::vector<std::vector<std::string>> CreateBoard ()
{
   return std::vector<std::vector<std::string>> (3, std::vector<std::string>(3, ""));
}


int main()
{
  std::vector<std::vector<std::string>> new_board=CreateBoard();
  
}
