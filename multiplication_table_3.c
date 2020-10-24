/*multiplication_table_3*/
/*to print the multiplication table of a number by getting the range from the user*/

#include<stdio.h>

int main()
{
	int first_number,range;
	printf("enter a number");
	scanf("%d",&first_number);
	printf("Enter the range");
	scanf("%d",&range);
	for(int a=1;a<=range;++a)
	printf("%d\t*\t%d\t=\t%d\n",first_number,a,first_number*a);
	return 0;
}