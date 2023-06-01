#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sum(int a, int b){
  return a + b;
}

int main(){
  int myNumber = 5;
  char myChar = 'b';
  char * myString = "Hello World!";
  int a = 3;
  int b = 10;
  int numbers[10] = {1,2,3,4,5,6,7,8,9,10};

  srand(time(NULL));
  int c = (rand() % 100);

  if (c % 2 && c < 50){
    printf("%d is even and less than 50\n", c);
  } else if (c % 2 && c > 50){
    printf("%d is even and greater than 50\n", c);
  } else if (c % 2 == 0 && c < 50){
    printf("%d is odd and less than 50\n", c);
  } else if (c % 2 == 0 && c > 50){
    printf("%d is odd and greater than 50\n", c);
  } else {
    printf("%d is equal to 50\n", c);
  }
  
  int result = sum(a, b);

  printf("The result of %i + %i is %i\n", a, b, result);
  printf("The 7th number in the array is %i\n", numbers[6]);
  printf("%s\nMy number is %i and my letter is %c\n", myString, myNumber, myChar);
  
  return 0;
}