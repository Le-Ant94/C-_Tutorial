#include <iostream>

int main()
{
  int factorial = 10; //5*4*3*2*1
  int i = factorial - 1; //start i at 4

  while (i > 1)
  {
    factorial *= i;
    i--;
  }

  std::cout << factorial << std::endl;
}
