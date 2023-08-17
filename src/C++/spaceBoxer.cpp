#include <iostream>

int main()
{
  float weight;
  int planet;

  std::cout << "Please enter your weight in kilograms: ";
  std::cin >> weight;

  std::cout << "\nPlease enter the number of the planet you want to fight on:\n";
  std::cout << "1. Venus  2. Mars   3. Jupiter\n";
  std::cout << "4. Saturn 5. Uranus 6. Neptune\n";
  std::cin >> planet;

  switch (planet)
  {
  case 1:
    weight = weight * 0.78;
    break;
  case 2:
    weight = weight * 0.39;
    break;
  case 3:
    weight = weight * 2.65;
    break;
  case 4:
    weight = weight * 1.17;
    break;
  case 5:
    weight = weight * 1.05;
    break;
  case 6:
    weight = weight * 1.23;
    break;
  default:
    printf("Invalid planet number.\n");
    return -1;
  }

  std::cout << "\nYour weight on the selected planet is: " << weight << "\n";
}
