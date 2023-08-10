#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(NULL));
  int randomIntegers[10];
  int pH = rand() % 13 + 1;

  for (int i = 0; i < 10; i++)
  {
    randomIntegers[i] = rand() % 100;
  }

  for (int i = 0; i < 10; i++)
  {
    if (randomIntegers[i] % 3 == 0)
    {
      printf("Fizz\t");
    }
    if (randomIntegers[i] % 5 == 0)
    {
      printf("Buzz\t");
    }
    if (randomIntegers[i] % 3 == 0 && randomIntegers[i] % 5 == 0)
    {
      printf("FizzBuzz\t");
    }
    else
    {
      printf("%i\t", randomIntegers[i]);
    }
  }

  printf("\n");

  switch (pH)
  {
  case 1:
    printf("%i - Same pH as HCl\n", pH);
    break;
  case 2:
    printf("%i - Same pH as Lemon Juice\n", pH);
    break;
  case 3:
    printf("%i - Same pH as Orange Juice\n", pH);
    break;
  case 4:
    printf("%i - Same pH as Tomato juice\n", pH);
    break;
  case 5:
    printf("%i - Same pH as Black coffee\n", pH);
    break;
  case 6:
    printf("%i - Same pH as Milk\n", pH);
    break;
  case 7:
    printf("%i - Same pH as Water\n", pH);
    break;
  case 8:
    printf("%i - Same pH as Sea water\n", pH);
    break;
  case 9:
    printf("%i - Same pH as Baking soda\n", pH);
    break;
  case 10:
    printf("%i - Same pH as Milk of magnesia\n", pH);
    break;
  case 11:
    printf("%i - Same pH as Ammonia\n", pH);
    break;
  case 12:
    printf("%i - Same pH as Soapy water\n", pH);
    break;
  case 13:
    printf("%i - Same pH as NaOH\n", pH);
    break;
  default:
    printf("Invalid pH value\n");
    break;
  }
}