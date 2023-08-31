#include <iostream>
#include <random>

int getRandomInt(int min = 1000, int max = 9999)
{
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dis(min, max);
  return dis(gen);
}

bool repeatingDigits(int number)
{
  if (number % 10 == (number / 10) % 10 || number % 10 == (number / 100) % 10 || number % 10 == (number / 1000) % 10 || (number / 10) % 10 == (number / 100) % 10 || (number / 10) % 10 == (number / 1000) % 10 || (number / 100) % 10 == (number / 1000) % 10)
  {
    return true;
  }
  return false;
}

int main()
{
  int size;
  std::cout << "Enter the size of the array: ";
  std::cin >> size;
  int *arrayOfInts{new int[size]};

  std::cout << "Index\tValue\n";
  for (int i = 0; i < size; i++)
  {
    arrayOfInts[i] = getRandomInt();
    while (repeatingDigits(arrayOfInts[i]))
    {
      arrayOfInts[i] = getRandomInt();
    }
    std::cout << i + 1 << "\t" << arrayOfInts[i] << "\n";
  }

  delete[] arrayOfInts;

  return 0;
}