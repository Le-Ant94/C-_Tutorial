#include <iostream>

int main()
{
  int grades[][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9}}; //multi-dimentional (2D, 3x3) array; must define the dimension second "3"

  for(int r = 0; r < 3; r++) //must have nested for loop for 2D array; r = row, c = column
  {
    for(int c = 0; c < 3; c++)
    {
      std::cout << grades[r][c] << "\t";
    }
  }

}
