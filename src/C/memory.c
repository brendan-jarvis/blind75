#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
  char *name;
  char *line1;
  char *line2;
  char *line3;
} Haiku;

int main()
{
  char str[] = "thequickbrownfoxjumpsoverthelazydog";

  // print the string and the size of the string
  printf("%s\t%lu bytes\n", str, sizeof(str));

  Haiku *basho = (Haiku *)malloc(sizeof(Haiku));

  // create a haiku basho
  basho->name = (char *)malloc(strlen("Basho") + 1);
  strcpy(basho->name, "Basho");

  basho->line1 = (char *)malloc(strlen("an old silent pond") + 1);
  strcpy(basho->line1, "an old silent pond");

  basho->line2 = (char *)malloc(strlen("a frog jumps into the pond") + 1);
  strcpy(basho->line2, "a frog jumps into the pond");

  basho->line3 = (char *)malloc(strlen("splash! silence again") + 1);
  strcpy(basho->line3, "splash! silence again");

  // print the haiku
  printf("\n%s\n%s\n%s\n%s\n", basho->name, basho->line1, basho->line2, basho->line3);

  // free memory
  free(basho->name);
  free(basho->line1);
  free(basho->line2);
  free(basho->line3);
  free(basho);
}
