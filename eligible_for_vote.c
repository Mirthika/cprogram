/*eligibletovote*/

#include<stdio.h>

int main()
{
 int age,B;
 B=18;
 printf("Enter your age");
 scanf("%d",&age);
 if(age>=18)
  {
    printf("eligible to vote",age);
  }
 else
  {
    printf("noteligible to vote ",age);
  }
  
 return 0;
}
    