#include <stdio.h>
#include <string.h>

int main()
{

  char s1[] = "Brendan";
  char s2[] = " Jarvis";

  int len = strlen(s1) + strlen(s2);

  char s3[len];

  strcpy(s3, s1);
  strcat(s3, s2);

  printf("%s\n", s3);
}