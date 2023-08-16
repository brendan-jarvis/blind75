#include <stdio.h>
#include <stdlib.h>

int main()
{
  int coordinates[5] = {1, 2, 3, 4, 5};
  int coordinatesLength = sizeof(coordinates) / sizeof(coordinates[0]);

  int matrix[3][4] = {
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 10, 11, 12}};
  int matrixLength = sizeof(matrix) / sizeof(matrix[0]);

  system("clear");
  printf("Array:\n");
  for (int i = 0; i < coordinatesLength; i++)
  {
    printf("%d\t", coordinates[i]);
  }

  printf("\nMultidimensional array:\n");
  for (int i = 0; i < matrixLength; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      printf("%d\t", matrix[i][j]);
    }
    printf("\n");
  }
}