#include <stdio.h>

double dblVar;
double *dblPtr = &dblVar;

int main()
{
  printf("%p", dblPtr);
}