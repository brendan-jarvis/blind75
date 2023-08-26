#include <iostream>
#include "scope_functions.h"

int main()
{
  std::cout << "Flash\n"
            << secret_string("Flash");
  std::cout << "Green Arrow\n"
            << secret_string("Green Arrow");
  std::cout << "Execute Order 66\n"
            << order66();
  std::cout << "Execute Order 66\n"
            << order66("Kill the Jedi!");

  // Overloading functions
  std::cout << "Overload 5 (int)\n"
            << overload(5)
            << "!\n";
  std::cout << "Overload 5 (string)\n"
            << overload("5")
            << "!\n";

  // Template functions
  std::cout << "Template 5 (int)\n"
            << template_function(5)
            << "!\n";

  std::cout << "Template 5 (double)\n"
            << template_function(5.0)
            << "!\n";
}