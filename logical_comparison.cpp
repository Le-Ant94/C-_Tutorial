#include <iostream>
using std::cout;

int main()
{
  std::string guess_name;
  int guess_age;

  std::string name = "Anthony";
  int age = 26;

  std::cout << "What is my name?\n";
  std::cin >> guess_name;
  std::cout << "What is my age?\n";
  std::cin >> guess_age;

  //comparison operators: == (equal to), != (not equal to), <= (lesser or equal to), >= (greater or equal to)
  //logical operators: && (and), || (or), ! (not)

  if (guess_name == name && guess_age == age)
  {
    std::cout << "You have guessed correctly.\n";
  }

  else
  {
    std::cout << "You have guessed wrong.\n";
  }

  return 0;
}
