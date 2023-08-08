#include <stdio.h>

int main()
{
  int number;
  float decimal;
  char letter;
  char digit;
  long int bigNumber;

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
}