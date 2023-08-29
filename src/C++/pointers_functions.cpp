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