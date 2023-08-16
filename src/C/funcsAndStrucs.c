#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <time.h>

float getRandomFloat(void)
{
  srand(time(NULL));
  float randomDecimal = rand() % 100;
  float random = randomDecimal / 100;

  return random;
}

int main(void)
{
  float random = getRandomFloat();

  printf("Number: %f\n", random);
  printf("Number ceiling: %d\n", (int)ceil(random));
  printf("Number floor: %d\n", (int)floor(random));

  return 0;
}