#include <stdio.h>

int main()
{
  int number;
  float decimal;
  char letter;
  long int bigNumber;

  number = 10;
  decimal = 3.14;
  letter = 'A';
  bigNumber = 1234567890;

  printf("number: %d\n", number);
  printf("decimal: %f\n", decimal);
  printf("letter: %c\n", letter);
  printf("bigNumber: %ld\n", bigNumber);
}