#include <iostream>
#include <string>

using std::cout;

int main()
{
  cout << "Hello\aThere\n";
  cout << "Hello\bThere\n";
  cout << "Hello There\0"; //null; indicating the string is over
}
