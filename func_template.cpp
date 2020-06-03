#include <iostream>
#include <string>

template <typename T>

void swap(T &a, T &b)
{
  T temp = a;
  a = b;
  b = temp;
}

int main()
{
  int a = 10;
  int b = 20;

  swap(a,b);
  std::cout << "a: " << a << "\tb: " << b << "\n";


  std::string first_name = "Anthony";
  std::string last_name = "Dao";

  swap(first_name, last_name);
  std::cout << first_name << " " << last_name << std::endl;
}
