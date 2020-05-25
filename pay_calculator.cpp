#include <iostream>
using namespace std;

//this program calculates how much a person makes per week

int main()
{
  double hour, rate, pay;

  cout << "How many hours do you work per week? ";
  cin >> hour;

  cout << "How much do you get paid per hour? ";
  cin >> rate;

  //calculate pay per week
  pay = hour*rate;

  cout << "You get paid " << pay << " dollars per week" << endl;

  return 0;

}
