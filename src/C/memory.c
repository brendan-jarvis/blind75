#include <stdio.h>

int main()
{
  char str[] = "thequickbrownfoxjumpsoverthelazydog";

  // print the string and the size of the string
  printf("%s\t%lu bytes\n", str, sizeof(str));
}