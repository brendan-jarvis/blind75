#include <iostream>

int main(){
  double weight;
  double marsWeight;

  std::cout << "Enter your weight: ";
  std::cin >> weight;

  marsWeight = weight * 0.38;

  std::cout << "Your weight on Mars is: " << marsWeight << "\n";
}