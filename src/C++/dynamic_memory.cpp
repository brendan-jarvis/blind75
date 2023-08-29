#include <iostream>

int main()
{
  std::cout << "Started the application! Allocating 4MB of memory\n";
  // allocate an amount of memory that will cause stack overflow
  int array[1000000][1000];
  std::cout << "Allocated the memory! Press enter to continue\n";
  std::cin.get();
  std::cout << "Finished the application!\n";
  return 0;
}