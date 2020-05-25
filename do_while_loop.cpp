#include <iostream>

int main()
{
  std::string password = "hellotacos123";
  std::string guess;

  do
  {
    std::cout << "Guess the password\n";
    std::cin >> guess;
  }

  while(guess != password);
}
