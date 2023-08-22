#include <iostream>

std::string secret_string(std::string passcode);

int main()
{
  std::cout << secret_string("Flash");
  std::cout << secret_string("Green Arrow");
}