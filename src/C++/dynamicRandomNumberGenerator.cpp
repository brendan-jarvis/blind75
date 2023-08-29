#include <iostream>
#include <random>

int getRandomInt(int min = 1000, int max = 9999)
{
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dis(min, max);
  return dis(gen);
}

int main()
{
  int size;
  std::cout << "Enter the size of the array: ";
  std::cin >> size;
  int *arrayOfInts{new int[size]};

  for (int i = 0; i < size; i++)
  {
    arrayOfInts[i] = getRandomInt();
  }

  // print the values in the array in a table
  std::cout << "Index\tValue\n";
  for (int i = 0; i < size; i++)
  {
    std::cout << i + 1 << "\t" << arrayOfInts[i] << "\n";
  }

  delete arrayOfInts;
  arrayOfInts = nullptr;

  return 0;
}