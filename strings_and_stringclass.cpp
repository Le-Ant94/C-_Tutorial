#include <iostream>
#include <string>
using std::cout;

int main()
{
    std::string greeting = "hello";
    std::cout << greeting[0] << std::endl; //grab the first character (h) in "hello"

    std::string name;
    std::string name_left_over;
    std::cin >> name; //only grab the first word "tony" instead of "tony stark"
    std::cin >> name_left_over; //grab the second word "stark"
    std::cout << name << std::endl;
    std::cout << name_left_over << std::endl;

    char me[] = "tony"; // very limiting; only store 6 characters
    std::cout << me << std::endl;


}
