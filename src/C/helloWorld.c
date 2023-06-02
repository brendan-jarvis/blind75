#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Function declarations
int sum(int a, int b);
int staticSum(int a);
void forLoop(int array[]);
void whileLoop(int array[]);
void ifElse(char name[], int c);
void printTime();

int main()
{
  int myNumber = 5;
  char myChar = 'b';
  char myString[] = "Hello World!";
  char name[20];
  int stringLength = strlen(myString);
  int a = 3;
  int b = 10;
  int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  // Random number
  srand(time(NULL));
  int c = (rand() % 100);

  ifElse(name, c);

  // Sum function
  int result = sum(a, b);

  if (strcmp(name, "Brendan") == 0)
  {
    printf("Hello Brendan!\n");
  }
  else
  {
    printf("Hello %s!\n", name);
  }

  forLoop(array);

  whileLoop(array);

  printTime();

  // Print strings
  printf("The result of %i + %i is %i\n", a, b, result);
  printf("The 7th number in the array is %i\n", numbers[6]);
  printf("%s My number is %i and my letter is %c\n", myString, myNumber, myChar);
  printf("%d\n", stringLength);
  printf("Static sum of 5 is %d\n", staticSum(5));
  printf("Static sum of 75 is %d\n", staticSum(75));

  return 0;
}

int sum(int a, int b)
{
  return a + b;
}

void forLoop(int array[])
{
  // For loop
  int factorial = 1;
  int i;

  for (i = 0; i < 10; i++)
  {
    factorial *= array[i];
  }

  printf("10! is %d.\n", factorial);
}

void whileLoop(int array[])
{
  int j = 0;
  while (j < 10)
  {
    if (j == 9)
    {
      printf("%d.\n", array[j]);
      break;
    }

    if (array[j] % 2 == 0)
    {
      j++;
      continue;
    }

    printf("%d, ", array[j]);
    j++;
  }
}

void ifElse(char name[], int c)
{
  // Conditionals
  if (c % 2 && c < 50)
  {
    printf("%d is even and less than 50\n", c);
    strcpy(name, "Brendan");
  }
  else if (c % 2 && c > 50)
  {
    printf("%d is even and greater than 50\n", c);
    strcpy(name, "James");
  }
  else if (c % 2 == 0 && c < 50)
  {
    printf("%d is odd and less than 50\n", c);
    strcpy(name, "Brendan");
  }
  else if (c % 2 == 0 && c > 50)
  {
    printf("%d is odd and greater than 50\n", c);
    strcpy(name, "James");
  }
  else
  {
    printf("%d is equal to 50\n", c);
    strcpy(name, "Brendan");
  }
}

void printTime()
{
  // Print the time
  time_t t = time(NULL);
  struct tm tm = *localtime(&t);
  printf("The time is %d:%d:%d\n", tm.tm_hour, tm.tm_min, tm.tm_sec);
}

int staticSum(int a)
{
  static int result = 0;
  return result = (a * (a + 1)) / 2;
}