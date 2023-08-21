#include <iostream>
#include <vector>

int main()
{
  std::vector<int> numbers = {2, 4, 3, 6, 1, 9};
  int sum_even = 0;
  int sum_odd = 0;

  for (int i = 0; i < numbers.size(); i++)
  {
    if (numbers[i] % 2 == 0)
    {
      sum_even += numbers[i];
    }
    else
    {
      sum_odd += numbers[i];
    }
  }

  std::cout << "Sum of even numbers: " << sum_even << "\n";
  std::cout << "Sum of odd numbers: " << sum_odd << "\n";
}