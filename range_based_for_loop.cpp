#include <iostream>
#include <array>
#include <vector>

int main()
{
  int data[] = {1, 2, 3, 4, 5, 6};

  for(int y : data) //range-based for loop
  {
    std::cout << y << "\t"; //same function as the loop below, but cleaner.  Does not apply everywhere
  }

  /*for(int i = 0; i < 6; i++)
  {
    std::cout << data[i] << "\t";
  }*/

  std::cout << "\n";
}
