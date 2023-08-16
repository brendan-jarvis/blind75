#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <time.h>

void printRandomNumber(int maxNumber)
{
  srand(time(NULL));
  float *random = (float *)malloc(sizeof(float));
  *random = rand() % maxNumber + 1;

  printf("Number: %i\n", (int)*random);
  printf("Number squared: %i\n", (int)pow(*random, 2));
  printf("Number cubed: %i\n", (int)pow(*random, 3));
  printf("Number log base 10: %f\n", log10(*random));

  free(random);
}

int main(void)
{
  printRandomNumber(20);
  printf("\n");
  printRandomNumber(400);
  printf("\n");
  printRandomNumber(1000);

  return 0;
}