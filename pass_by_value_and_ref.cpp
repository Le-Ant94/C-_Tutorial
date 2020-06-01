#include <iostream>
#include <string>

void swap(int a, int b) //try &a and &b and see the difference
{
  int temp = a;
  a = b;
  b = temp;

  std::cout << "a: " << a << "\tb: " << b << "\n";
}

void swap(std::string a, std::string b) //function overloading; same variables a & b but are strings this time
{
  std::string temp = a;
  a = b;
  b = temp;
}

int main()
{
  int a = 10;
  int b = 20;

  swap(a, b); //displaying results according to function void swap(int a, int b)

  std::string first_name = "Anthony";
  std::string last_name = "Dao";

  swap(first_name, last_name); //displaying results according to function void swap(std::string a, std::string b)
  std::cout << first_name << " " << last_name << std::endl;

  std::cout << "a: " << a << "\tb: " << b << "\n"; //displaying results for the declared values of a and b
}
