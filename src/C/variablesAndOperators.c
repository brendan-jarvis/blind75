#include <stdio.h>

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
}