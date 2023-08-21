#include <iostream>
#include <vector>

bool is_even(int number)
{
  return number % 2 == 0;
};

double average(double a, double b)
{
  return (a + b) / 2;
}

int tenth_power(int num)
{
  int result = 1;
  for (int i = 0; i < 10; i++)
  {
    result = result * num;
  }
  return result;
};

std::vector<int> first_three_multiples(int num)
{
  std::vector<int> multiples;
  for (int i = 1; i < 4; i++)
  {
    multiples.push_back(num * i);
  }
  return multiples;
};

int main()
{
  std::cout << "is_even(8): \n";
  is_even(8) ? std::cout << "true\n" : std::cout << "false\n";
  std::cout << "\naverage(42.0, 24.0): \n";
  std::cout << average(42.0, 24.0) << "\n";
  std::cout << "\ntenth_power(3): \n";
  std::cout << tenth_power(3) << "\n";
  std::cout << "\nfirst_three_multiples(8): \n";
  std::vector<int> multiples = first_three_multiples(8);
  for (int i = 0; i < multiples.size(); i++)
  {
    std::cout << multiples[i] << "\n";
  }
}