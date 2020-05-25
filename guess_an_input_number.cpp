#include <iostream>
#include <string>

int main()
{
  int answer = 11;
  std::cout << "Guess the number: \n";
  int guess;
  std::cin >> guess;
  int points = guess == answer ? 10 : 0;  // is guess equal to answer? If yes, user gets 10 points. If no, user gets 0 point.

  std::cout << points << std::endl;
}
