#include <stdio.h>
#include <string.h>

int main()
{
  char str[] = "thequickbrownfoxjumpsoverthelazydog";

  // print the string and the size of the string
  printf("%s\t%lu bytes\n", str, sizeof(str));

  // haiku typedef
  typedef struct
  {
    char *name;
    char *line1;
    char *line2;
    char *line3;
  } Haiku;

  // create a haiku basho
  Haiku basho;
  basho.name = "Basho";
  basho.line1 = "an old silent pond";
  basho.line2 = "a frog jumps into the pond";
  basho.line3 = "splash! silence again";

  // print the haiku
  printf("\n%s\n%s\n%s\n%s\n", basho.name, basho.line1, basho.line2, basho.line3);
}