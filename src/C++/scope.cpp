#include <iostream>
#include "scope_functions.h"

int main()
{
  std::cout << "Flash\n" << secret_string("Flash");
  std::cout << "Green Arrow\n" << secret_string("Green Arrow");
}