#include <iostream>
#include <string>

int main()
{
  std::string greeting = "Hello";
  greeting += " there"; //add " there" to "Hello"
  greeting.replace(greeting.find("there"), 5, "Tony"); //find "there" and replace 5 characters with "Tony"
  std::cout << greeting << std::endl;
}
