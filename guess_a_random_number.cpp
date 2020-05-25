#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

void play_game()
{
  int random = rand() % 251; //return a random number
  std::cout << random << std::endl;

  std::cout << "Guess a number: ";

  while (true)
  {
    int guess;
    std::cin >> guess;

    if (guess == random)
    {
      std::cout << "You win!\n";
      break;
    } else if (guess < random)
    {
      std::cout << "Too low\n";
    } else
    {
      std::cout << "Too high\n";
    }

  }
}

int main ()
{
  srand (time(NULL));
  int choice;

  std::cout << &play_game << std::endl; //for testing purpose

  do
  {
    std::cout << "0. Quit" << std::endl << "1. Shall we play a game?\n";
    std::cin >> choice;

    switch (choice)
    {
      case 0:
        std::cout << "Thanks for nothing.\n";
        return 0;
      case 1:
        std::cout << "Let's play!\n";
        break;
    }
  } while(choice != 0);
}
