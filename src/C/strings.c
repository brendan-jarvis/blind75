#include <stdio.h>
#include <string.h>

int main()
{

  char s1[20] = "Brendan";
  char s2[] = " Jarvis";

  strcat(s1, s2);

  printf("%s\n", s1);
}