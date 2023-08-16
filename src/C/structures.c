#include <stdio.h>
#include <string.h>
#include <stdio.h>

struct Person
{
  char firstName[26];
  char lastName[26];
  char country[30];
};

void printPerson(struct Person *person);
void printPeople(struct Person *people, int size);
void pigLatinNames(struct Person *people, int size);

int main(void)
{
  struct Person brendan = {"Brendan", "Jarvis", "New Zealand"};
  struct Person jsBrendan = {"Brendan", "Eich", "United States of America"};

  struct Person people[2] = {brendan, jsBrendan};

  printPeople(people, 2);
  printf("\nIn pig latin (after function call):\n");
  pigLatinNames(people, 2);
  printPeople(people, 2);
}

void printPerson(struct Person *person)
{
  printf("\nFirst name:\t%s\n", person->firstName);
  printf("Last name:\t%s\n", person->lastName);
  printf("Country:\t%s\n", person->country);
}

void printPeople(struct Person *people, int size)
{
  for (int i = 0; i < size; i++)
  {
    printPerson(&people[i]);
  }
}

void pigLatinNames(struct Person *people, int size)
{
  for (int i = 0; i < size; i++)
  {
    char pigLatinFirstName[29];
    char pigLatinLastName[29];

    // Convert first name to Pig Latin
    if (strchr("aeiouAEIOU", people[i].firstName[0]) != NULL)
    {
      sprintf(pigLatinFirstName, "%sway", people[i].firstName);
    }
    else
    {
      sprintf(pigLatinFirstName, "%s%cay", people[i].firstName + 1, people[i].firstName[0]);
    }

    // Convert last name to Pig Latin
    if (strchr("aeiouAEIOU", people[i].lastName[0]) != NULL)
    {
      sprintf(pigLatinLastName, "%sway", people[i].lastName);
    }
    else
    {
      sprintf(pigLatinLastName, "%s%cay", people[i].lastName + 1, people[i].lastName[0]);
    }

    // Update person's name
    strcpy(people[i].firstName, pigLatinFirstName);
    strcpy(people[i].lastName, pigLatinLastName);
  }
}
