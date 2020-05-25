#include <iostream>
using namespace std;

int main()
{
  int age;

  cout << "What is your age?\n" << endl;
  cin >> age;

  switch (age)
  {
    case 13:
      cout << "Your age is 13.\n" << endl;
      break;

    case 14:
      cout << "Your age is 14.\n" << endl;
      break;

    default:
      cout << "You are neither 13 or 14.\n" << endl;
      break;
  }

  return 0;
}
