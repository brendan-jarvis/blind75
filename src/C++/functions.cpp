#include <iostream>

bool is_even(int number)
{
  return number % 2 == 0;
};

double average(double a, double b)
{
  return (a + b) / 2;
}

int main()
{
  for (int i = 1; i < 20; i++)
  {
    std::cout << i << " is ";
    if (is_even(i))
    {
      std::cout << "even\n";
    }
    else
    {
      std::cout << "odd\n";
    }
  }
}