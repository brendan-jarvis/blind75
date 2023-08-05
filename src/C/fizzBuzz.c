#include <stdio.h>
#include <stdlib.h>

char *fizzBuzz(int number);

int main()
{
  int i;
  for (i = 1; i < 50; i++)
  {
    printf("%s\n", fizzBuzz(i));
  }
}

char *fizzBuzz(int number)
{
  if (number % 15 == 0)
  {
    return "FizzBuzz";
  }
  else if (number % 3 == 0)
  {
    return "Fizz";
  }
  else if (number % 5 == 0)
  {
    return "Buzz";
  }
  else
  {
    char *result = malloc(4 * sizeof(char));
    sprintf(result, "%d", number);
    return result;
  }
}
