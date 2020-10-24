/*multiplication_table_2*/
/*to print the multiplication table of a number in reverse*/

#include<stdio.h>

int main()
{
	int first_number;
	printf("Enter the number=");
	scanf("%d",&first_number);
	for(int a=15;a>=0;--a)
	printf("%d\t*\t%d\t=\t%d\n",first_number,a,first_number*a);
	return 0;
}