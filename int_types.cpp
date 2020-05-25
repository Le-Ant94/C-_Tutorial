#include <iostream>
using std::cout;

int main()
{
  short a; // at least 16 bits
  int b; //at least 16 bits, but more often 32 bits
  long c; //only allows positive values, at least 32 bits
  long long d; //at least 64 bits
  unsigned short aa; //can only be positive
  unsigned int bb;  //can only be positive
  unsigned long cc; //can only be positive
  unsigned long long dd;  //can only be positive

  //size: short < int < long < long long

  cout << sizeof(int) << std::endl; //check size of each integer type

}
