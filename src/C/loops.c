#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
  srand(time(NULL));
  int random = rand() % 20 + 1;
  int guess;
  int hints = 0;

  printf("Guess the number between 1 and 20!\n");

  printf("Do you want some hints? (1 for yes, 0 for no)\n");

  scanf("%d", &hints);

  if (hints == 1)
  {
    printf("The number squared is:\t%d\n", (int)pow(random, 2));
    printf("The number cubed is:\t%d\n", (int)pow(random, 3));
  }
  else if (hints == 0)
  {
    printf("Okay, no hints for you!\nEnter your guess:\n");
  }

  scanf("%d", &guess);

  while (guess != random)
  {
    if (guess > random)
    {
      printf("Too high! Guess again!\n");
      scanf("%d", &guess);
    }
    else
    {
      printf("Too low! Guess again!\n");
      scanf("%d", &guess);
    }
  }

  printf("You guessed it! The number was %d!\n", random);
}