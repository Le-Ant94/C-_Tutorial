#include <iostream>
#include <string>

int main()
{
    std::string sentence = "Hello, my name is Anthony\n";

    for (int i = 0; i < sentence.size(); i++)
    {
      std::cout << sentence[i] << std::endl;

      if (sentence[i] == 'o')
      {
        std::cout << "Found o!\n" << std::endl;
        //break;  //if want to stop at first 'o' find
      }
    }
}
