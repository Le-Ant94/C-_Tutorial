#include <iostream>

void print_array(int array[], int size)
{
  for (int i = 0; i < size; i++)
  {
    std::cout << array[i] << std::endl;
  }
  std::cout << std::endl;
}

int main()
{
  const int SIZE = 100;
  int guesses[SIZE];

  int count = 0;

  //guesses[3] = 300; //grabbing the index # 3 in array and guess it as the number 300
  for (int i = 0; i < SIZE; i++)
  {
    if (std::cin >> guesses[i])
    {
      count++;

    }

    else
    {

      break;
    }
  }
  print_array(guesses, count);
  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  std::string test;
  std::cin >> test;
  std::cout << test << std::endl;

  /*int size = sizeof(guesses) / sizeof(guesses[0]); //sizeof(guesses) = # of bytes; sizeof(guesses[0]) = number of indices in array
  for (int i = 0; i < size; i++)
  {
    std::cout << guesses[i] << std::endl;
  }*/
}
