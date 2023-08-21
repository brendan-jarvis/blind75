#include <iostream>

std::string needs_water(int days, bool is_succulent)
{
  if (!is_succulent && days > 3)
  {
    return "Time to water the plant.";
  }
  if (is_succulent && days <= 12)
  {
    return "Don't water the plant!";
  }
  if (is_succulent && days >= 13)
  {
    return "Go ahead and give the plant a little water.";
  }
  else
  {
    return "Don't water the plant!";
  }
}

int main()
{
  std::cout << needs_water(10, false) << "\n";
  std::cout << needs_water(12, true) << "\n";
  std::cout << needs_water(13, true) << "\n";
  std::cout << needs_water(8, true) << "\n";
}