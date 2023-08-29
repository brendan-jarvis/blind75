#include <iostream>
#include "pointers_functions.h"

int main()
{
  int a = 5;
  int *b = &a;
  int *c = nullptr;

  std::cout << welcomeMessage();
  std::cout << "Variable a = " << a << " and variable b = " << *b << "\n";

  std::cout << "Tripling variable a...\n";
  triple(a);
  std::cout << "Variable a = " << a << " and variable b = " << *b << "\n";

  std::cout << "Function tripleConst(*b) returns " << tripleConst(*b) << "\n";
  std::cout << "a = " << a << "\tb = " << *b << "\n";

  std::cout << "Memory addresses:\n";
  std::cout << "a = " << &a << "\tb = " << &b << "\n";

  std::cout << "c = " << c << "\n";
  std::cout << "nullptr allows for the creation of a pointer that does not point to anything.\n"
            << "This is useful for initializing pointers that will be set later in the program.\n";
  std::cout << "Assigning c = &a\n";
  c = &a;
  std::cout << "c = " << c << " = " << *c << "\n";
}