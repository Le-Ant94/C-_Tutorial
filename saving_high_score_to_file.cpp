#include <iostream>
#include <fstream>
#include <vector>
#include <array>
#include <string>
#include <ctime>
#include <cstdlib>

void print_vector(std::vector<int> vector)
{
  for (int i = 0; i < vector.size(); i++)
  {
    std::cout << vector[i] << "\t";
  }

  std::cout << "\n";
}

void play_game()
{
  std::vector<int> guesses;
  int count = 0;

  int random = rand() % 251;
  std::cout << random << std::endl;
  std::cout << "Guess a number: ";

  while(true)
  {
    int guess;
    std::cin >> guess;
    count++;

    guesses.push_back(guess);

    if(guesses == random)
    {
      std::cout << "You win! \n";
      break;
    }

    else if (guess < random)
    {
      std::cout << "Too low \n";
    }

    else
    {
      std::cout << "Too high \n";
    }
  }

  std::ifstream input("best_score.txt");

  int best_score;
  input >> best_score;

  std::ofstream output("best_score.txt");

  if(count < best_score)
  {
    output << count;
  }

  else
  {
    output << best_score;
  }

  print_vector(guesses);
}


int main()
{

}
