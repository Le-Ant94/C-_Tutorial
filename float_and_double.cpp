#include <iostream>
#include <float.h>

using std::cout;

int main()
{
  float a = 10.0 / 3;
  a = a * 100000;
  double b = 7.7E4; // 7.7E4 or 7.7 * 10^4
  long double c = 7.7E8;

  std::cout << a << std::endl;
  std::cout << b << std::endl;
  std::cout << c << std::endl;
  cout << FLT_DIG << std::endl; //6 digits precision
  cout << DBL_DIG << std::endl; //15 digits precision
  cout << LDBL_DIG << std::endl;  //18 digits precision

}
