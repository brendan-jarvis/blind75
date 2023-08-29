#include <iostream>
#include "pointers_functions.h"

std::string welcomeMessage()
{
  std::string message = "Welcome to the REFERENCES AND POINTERS!\n";
  return message;
}

int triple (int &i)
{
  i = i * 3;
  return i;
}

int tripleConst (const int &i)
{
  // i = i * 3; // This line will cause an error
  return i * 3;
}