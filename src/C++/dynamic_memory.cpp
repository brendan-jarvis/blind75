#include <iostream>

int main()
{
  std::cout << "Started the application! Allocating 1 int dynamically\n";

  int *ptr{new int};
  std::cout << "Allocated 1 int dynamically\n";

  std::cout << "Enter a number: ";
  std::cin >> *ptr;
  std::cout << "You entered: " << *ptr << '\n';

  std::cout << "Deallocating the int\n";
  delete ptr;
  ptr = nullptr;
  return 0;
}