#include <iostream>

struct User
{
  std::string first_name;
  std::string last_name;
  std::string status;
}; //need ; after struct

int main()
{
  User Anthony;
  Anthony.first_name = "Anthony";
  Anthony.last_name = "Dao";
  Anthony.status = "Employed";

  std::cout << "First Name: " << Anthony.first_name << std::endl;
  std::cout << "Last Name: " << Anthony.last_name << std::endl;
  std::cout << "Status: " << Anthony.status << std::endl;
}
