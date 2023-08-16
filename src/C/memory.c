#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
  char *name;
  char *author;
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
  basho->name = (char *)malloc(strlen("The Old Pond") + 1);
  strcpy(basho->name, "The Old Pond");

  basho->author = (char *)malloc(strlen("Matsuo Basho") + 1);
  strcpy(basho->author, "Matsuo Basho");

  basho->line1 = (char *)malloc(strlen("An old silent pond 古池や") + 1);
  strcpy(basho->line1, "An old silent pond 古池や");

  basho->line2 = (char *)malloc(strlen("A frog jumps into the pond 蛙飛び込む") + 1);
  strcpy(basho->line2, "A frog jumps into the pond 蛙飛び込む");

  basho->line3 = (char *)malloc(strlen("Splash! Silence again. 水の音") + 1);
  strcpy(basho->line3, "Splash! Silence again. 水の音");

  // print the haiku
  printf("\n%s\n%s\n%s\n%s\n", basho->name, basho->line1, basho->line2, basho->line3);

  // free memory
  free(basho->name);
  free(basho->line1);
  free(basho->line2);
  free(basho->line3);
  free(basho);
}
