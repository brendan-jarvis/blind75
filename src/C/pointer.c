#include <stdio.h>

double dblVar = 3.14;
double *dblPtr = &dblVar;

double dblVarReassign = 2.71;

int main()
{
  printf("%p\n", dblPtr);

  dblPtr = &dblVarReassign;

  printf("%f\n%f", dblVar, *dblPtr);

  // pointer arithmetic
  int intArray[] = {1, 2, 3, 4, 5};
  int *intPtr = intArray;
  printf("%d\n", *intPtr);

  intPtr++;
  printf("%d\n", *intPtr);
}