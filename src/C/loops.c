#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(NULL));
  int random = rand() % 20 + 1;
  int guess;
  char hints;
  int tries = 0;

  printf("Guess the number between 1 and 20!\nEnter 0 to quit.\n");

  printf("Do you want some hints? (y/n)\n");

  scanf("%c", &hints);

  if (hints == 'y' || hints == 'Y')
  {
    printf("The number squared is:\t%d\n", random * random);
    printf("The number cubed is:\t%d\n", random * random * random);
  }
  else if (hints == 'n' || hints == 'N')
  {
    printf("Okay, no hints for you!\nEnter your guess:\n");
  }

  scanf("%d", &guess);

  while (guess != random)
  {
    if (guess <= 0)
    {
      printf("You have quit the game! The number was %d!\n", random);
      break;
    }
    if (tries == 4)
    {
      printf("You have run out of tries! The number was %d!\n", random);
      break;
    }
    if (guess > random)
    {
      tries++;
      printf("Too high! Guess again!\n");
      scanf("%d", &guess);
    }
    else
    {
      tries++;
      printf("Too low! Guess again!\n");
      scanf("%d", &guess);
    }
  }

  if (guess == random)
  {
    printf("You guessed it! The number was %d!\n", random);
  }
}