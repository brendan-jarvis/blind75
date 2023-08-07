#include <stdio.h>

int main()
{
  char str[] = "thequickbrownfoxjumpsoverthelazydog";

  // print the string and the size of the string
  printf("%s\t%lu bytes\n", str, sizeof(str));

  // haiku typedef
  typedef struct
  {
    char content[17];
    char name[5];
  } Haiku;
}