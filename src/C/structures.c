#include <stdio.h>

struct Person
{
  char firstName[20];
  char lastName[20];
  char country[30];
};

void printPerson(struct Person *person);

int main(void)
{
  struct Person brendan = {"Brendan", "Jarvis", "New Zealand"};
  struct Person jsBrendan = {"Brendan", "Eich", "United States of America"};

  struct Person people[2] = {brendan, jsBrendan};

  for (int i = 0; i < 2; i++)
  {
    printPerson(&people[i]);
  }
}

void printPerson(struct Person *person)
{
  printf("\nFirst name:\t%s\n", person->firstName);
  printf("Last name:\t%s\n", person->lastName);
  printf("Country:\t%s\n", person->country);
}