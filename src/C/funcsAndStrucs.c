#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <time.h>

void getRandomFloat(void)
{
  srand(time(NULL));
  float *random = (float *)malloc(sizeof(float));
  *random = rand() % 20 + 1;

  printf("Number: %i\n", (int)*random);
  printf("Number squared: %i\n", (int)pow(*random, 2));
  printf("Number cubed: %i\n", (int)pow(*random, 3));
  printf("Number log base 10: %f\n", log10(*random));

  free(random);
}

int main(void)
{
  getRandomFloat();

  return 0;
}