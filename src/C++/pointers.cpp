#include <iostream>
#include "pointers_functions.h"

int main(){
  int a = 5;
  int* b = &a;

  std::cout << welcomeMessage();
  std::cout << "Variable a = " << a << " and variable b = " << *b << "\n";
  
  std::cout << "Tripling variable a...\n";
  triple(a);
  std::cout << "Variable a = " << a << " and variable b = " << *b << "\n";
}