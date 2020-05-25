#include <iostream>
#include <string>

int main()
{
  std::string greeting;
  getline(std::cin, greeting); //grab entire message (including multiple words)
  std::cout << greeting << std::endl;
}
