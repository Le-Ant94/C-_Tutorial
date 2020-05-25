#include <iostream>
#include <string>

int main()
{
  std::string greeting = "Hello";
  greeting += " there"; //add " there" to "Hello"
  greeting.insert(4, "   "); //instert 3 spaces (or any text) after 3rd character
  greeting.erase(greeting.length() -1); //remove the last (or more) character
  std::cout << greeting << std::endl;
}
