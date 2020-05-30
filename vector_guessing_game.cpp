#include <iostream>
#include <vector>
#include <ctime>

void print_vector(std::vector<int> data)
{
  for(int i = 0; i < data.size(); i++)
  {
    std::cout << data[i] << "\t";
  }
  std::cout << "\n";
}

int main()
{
  std::vector<int> data = {1, 3, 5, 7};
  print_vector(data);
}

void play_game()
{
  std::vector<int> guesses;

  int random = rand() % 251;
  std::cout << random << std::endl;
  std::cout << "Guess a number: ";

  while (true)
  {
    int guess;
    std::cin >> guess;

    guesses.push_back(guess);

    if (guess == random)
    {
      std::cout << "You win! \n";
      break;
    }

    else if (guess < random)
    {
      std::cout << "Too high\n";
    }

    else
    {
      std::cout << "Too low\n";
    }

    print_vector(guesses);
  }

}
