#include <iostream>
#include <random>

int main()
{
  int *randomInt{new int};
  std::cout << "Started the application!\n";

  // assign a random number to memory location
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dis(0, 9999);
  *randomInt = dis(gen);

  // print the value
  std::cout << "The value of the int is: " << *randomInt << '\n';

  delete randomInt;
  randomInt = nullptr;

  // Exit the application
  return 0;
}