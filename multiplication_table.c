/*multiplication_table*/
/*to print the multiplication table of a number*/

#include<stdio.h>

int main()
{
	int number;
	printf("Enter the table_number=");
	scanf("%d",&number);
	for(int a=1;a<=15;++a)
	printf("%d\t*\t%d\t=\t%d\n",number,a,number*a);
	return 0;
}