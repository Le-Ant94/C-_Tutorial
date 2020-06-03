#include <iostream>

namespace utils  //creating a new namespace "utils" like "std"
{
  void print_array(const int data[], int size)
  {
    for (int i = 0; i < size; i++)
    {
      std::cout << data[i] << "\t";
    }
    std::cout << "\n";
  }
}

int main()
{
  int data[] = {1,2,3,4};
  utils::print_array(data,4); //calling "utils" like "std"
  std::cout << data[0] << std::endl;
}
