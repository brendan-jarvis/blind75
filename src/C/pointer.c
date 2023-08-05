#include <stdio.h>

int x;
int *ptr = &x;

int main()
{
  printf("%p", ptr);
}