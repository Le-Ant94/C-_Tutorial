//STL = Standard Template Library array
//ex: std::array<int, 5>  => array<type, size>

#include <iostream>
#include <vector>
#include <array>

void print_array(std::array<int, 20> data)
{
  for (int i = 0; i <data.size(); i++)
  {
    std::cout << data[i] << "\t";
  }
  std::cout << "\n";
}

int main()
{
  std::array<int, 20> data = {1, 2, 5};
  print_array(data);
}
