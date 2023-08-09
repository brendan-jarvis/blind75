#include <stdio.h>

int main()
{
  char firstName[] = "Brendan";
  char lastName[] = {'J', 'a', 'r', 'v', 'i', 's', '\0'};

  printf("Hello, %s %s!\n", firstName, lastName);
}