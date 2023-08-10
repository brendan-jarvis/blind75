#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(NULL));
  int randomIntegers[10];

  for (int i = 0; i < 10; i++)
  {
    randomIntegers[i] = rand() % 100;
  }

  for (int i = 0; i < 10; i++)
  {
    if (randomIntegers[i] % 3 == 0)
    {
      printf("Fizz\t");
    }
    if (randomIntegers[i] % 5 == 0)
    {
      printf("Buzz\t");
    }
    if (randomIntegers[i] % 3 == 0 && randomIntegers[i] % 5 == 0)
    {
      printf("FizzBuzz\t");
    }
    else
    {
      printf("%i\t", randomIntegers[i]);
    }
  }
}