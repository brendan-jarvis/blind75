#include <stdio.h>
#include <stdlib.h>

int main()
{
  int coordinates[5] = {1, 2, 3, 4, 5};

  for (int i = 0; i < sizeof(coordinates) / sizeof(coordinates[0]); i++)
  {
    printf("%d\t", coordinates[i]);
  }
}