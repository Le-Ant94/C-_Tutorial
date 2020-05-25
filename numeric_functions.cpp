#include <iostream>
#include <cmath>

int main()
{
  std::cout << sqrt(25) << std::endl;
  std::cout << sqrt(-25) << std::endl; //"nan" = "not a number"
  std::cout << pow(2, 3) << std::endl;
  std::cout << remainder(10, 3) << std::endl; //remainder of 10 divided by 3 is 1
  std::cout << fmin(10, 3.25) << std::endl; //takes smallest value of the two
  std::cout << fmax(10, 3.25) << std::endl; //takes largest value of the two
  std::cout << ceil(fmin(10, 3.25)) << std::endl;
  std::cout << trunc(1.5) << std::endl; //truncates 1.5 to 1
  std::cout << floor(-1.5) << std::endl;
  std::cout << round(-1.49) << std::endl;
}
