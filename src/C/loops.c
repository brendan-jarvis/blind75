#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(NULL));
  int random = rand() % 20 + 1;
  int guess;

  printf("Guess the number between 1 and 20!\n");
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