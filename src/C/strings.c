#include <stdio.h>
#include <stdlib.h>

int main()
{
  char firstName[] = "Brendan";
  char lastName[] = {'J', 'a', 'r', 'v', 'i', 's', '\0'};

  int firstNameLength = sizeof(firstName) / sizeof(firstName[0]);
  int lastNameLength = sizeof(lastName) / sizeof(lastName[0]);

  char fullName[firstNameLength + lastNameLength];

  // copy firstName into fullName
  for (int i = 0; i < firstNameLength; i++)
  {
    fullName[i] = firstName[i];
  }

  fullName[firstNameLength - 1] = ' ';

  // copy lastName into fullName
  for (int i = 0; i < lastNameLength; i++)
  {
    fullName[firstNameLength + i] = lastName[i];
  }

  system("clear");
  printf("Full name: %s\n", fullName);
}