#include <stdio.h>
 
int i = 20;
int max(int num1, int num2);
 
int main () {

   
   int first_number = 100;
   int second_number = 200;
   int ret;
 
   
   ret = max(first_number, second_number);
 printf("%d",i);
   printf( "Max value is : %d\n", ret );
 
   return 0;
}

int max(int num1, int num2) {

   
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 printf("%d",i);
   return result; 
}