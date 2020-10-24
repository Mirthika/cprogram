/*to print a charecter*/
/*printa chaerecter n times by getting the charecter from the user*/

#include<stdio.h>

int main()
{
	int number;
	char charecter;
  printf("enter the charecter : ");
  scanf("%c",&charecter);
  printf("Enter the number of times the charecter has to be printed : ");
  scanf("%d",&number);
  for(int a=1;a<=number;++a)
	printf("%c\t",charecter);
  return 0;
}