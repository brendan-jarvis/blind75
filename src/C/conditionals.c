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
    printf("%d\n", randomIntegers[i]);
  }
}