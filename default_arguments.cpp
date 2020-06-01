#include <iostream>
#include <string>

struct Rectangle //struct is a custom data type
{
  double length;
  double width;
};

double area(double length, double width) //use for a rectangle
{
  return length * width;
}

double area(double length) //use for a square
{
  return length * length;
}

double area(Rectangle rectangle)
{
  return rectangle.length * rectangle.width;
}

double pow(double base, int pow)
{
  int total = 1;

  for(int i = 0; i < pow; i++)
  {
    total *= base; //base*base*base
  }
  return total;
}

double pow(double base)
{
  return base * base;
}

int main()
{
  Rectangle rectangle;
  rectangle.length = 10;
  rectangle.width = 5;
  std::cout << area(rectangle.length, rectangle.width) << std::endl;
  std::cout << area(rectangle.length) << std::endl;
  std::cout << area(rectangle) << std::endl;
  std::cout << pow(3, 3) << std::endl;
  std::cout << pow(2) << std::endl;
}
