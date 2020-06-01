#include <iostream>
#include <string>

void swap(int a, int b) //try &a and &b and see the difference
{
  int temp = a;
  a = b;
  b = temp;

  std::cout << "a: " << a << "\tb: " << b << "\n";
}

int main()
{
  int a = 10;
  int b = 20;

  swap(a, b);

  std::cout << "a: " << a << "\tb: " << b << "\n";
}
