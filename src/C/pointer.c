#include <stdio.h>

double dblVar;
double *dblPtr = &dblVar;
double **dblPtrPtr = &dblPtr;
double ***dblPtrPtrPtr = &dblPtrPtr;

int main()
{
  printf("%p\n", dblPtr);
  printf("%p\n", dblPtrPtr);
  printf("%p\n", dblPtrPtrPtr);
}