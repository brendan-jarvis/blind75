#include <stdio.h>
#include <stdlib.h>

int main()
{
  int coordinates[5] = {1, 2, 3, 4, 5};
  int coordinatesLength = sizeof(coordinates) / sizeof(coordinates[0]);

  int multiDimensionalCoordinates[2][3] = {{1, 2, 3}, {4, 5, 6}};
  int multiDimensionalCoordinatesLength = sizeof(multiDimensionalCoordinates) / sizeof(multiDimensionalCoordinates[0]);

  system("clear");
  printf("Array:\n");
  for (int i = 0; i < coordinatesLength; i++)
  {
    printf("%d\t", coordinates[i]);
  }

  printf("\nMultidimensional array:\n");
  for (int i = 0; i < multiDimensionalCoordinatesLength; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d\t", multiDimensionalCoordinates[i][j]);
    }
    printf("\n");
  }
}