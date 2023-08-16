#include <stdio.h>
#include <stdlib.h>

int main()
{
  int number;
  float decimal;
  char letter;
  char digit;
  long int bigNumber;
  const double PI = 3.14159265358979323846;

  number = 10;
  decimal = 3.14;
  letter = 'A';
  digit = '3';
  bigNumber = 1234567890;

  printf("number: %d\n", number);
  printf("decimal: %f\n", decimal);
  printf("letter: %c\n", letter);
  printf("digit: %c\n", digit);
  printf("bigNumber: %ld\n", bigNumber);
  printf("area of circle with radius %d: %f\n", number, PI * number * number);

  // implicit casting
  number = decimal;
  printf("number: %d\n", number);

  // explicit casting
  number = (int)decimal;
  printf("number: %d\n", number);

  for (int i = 65; i < 91; i++)
  {
    char c = i;
    char lowercase = c + 32;

    int lowercaseInt = (int)lowercase;

    printf("%c%c (%i, %i)\t", c, lowercase, i, lowercaseInt);
  }

  // operations
  int odd = 3;
  int even = 4;
  int oddPlusEven = odd + even;

  printf("\n\nodd: %d\neven: %d\nodd + even: %d\n", odd, even, oddPlusEven);
  printf("oddPlusEven %% 2: %d\n", oddPlusEven % 2);

  if (oddPlusEven % 2 == 0)
  {
    printf("oddPlusEven is even\n");
  }
  else
  {
    printf("oddPlusEven is odd\n");
  }

  int m = 0;
  int n = 10;

  while (m < n)
  {
    printf("%d %d\n", m, n);
    m++;
    n--;
  }
  printf("%d %d\n", m, n);

  int a = 1;
  int b = 2;

  while (a != b)
  {
    // print the numbers
    printf("\nRandomising two numbers...\n");

    // assign a random int 1-10 to both
    a = rand() % 10 + 1;
    b = rand() % 10 + 1;
  }
}