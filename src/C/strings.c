#include <stdio.h>
#include <string.h>

int main()
{
  char s1[24];
  char s2[24];

  printf("What is your first name? ");
  scanf("%s", s1);
  printf("What is your last name? ");
  scanf("%s", s2);

  int len = strlen(s1) + strlen(s2) + 1;

  char s3[len];

  strcpy(s3, s1);
  strcat(s3, " ");
  strcat(s3, s2);

  printf("%s\n", s3);
}