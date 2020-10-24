#include <stdio.h>
 

int global_variable = 50;
 
int main () {

 
  int first_number, second_number,sum;
 
  
  first_number = 10;
  second_number = 20;
  sum = first_number + second_number;
 
  printf ("value of first_number = %d, second_number = %d and sum = %d\n", first_number, second_number, sum);
  printf("global variable = %d",global_variable);
 
  return 0;
}