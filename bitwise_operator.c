/*bitwise_operator*/
/*program using bitwise operator*/

#include<stdio.h>

int main()
{
	int first_number,second_number;
	printf("enter the numbers");
	scanf("%d %d",&first_number, &second_number);
	printf("first_number & second_number = %d\n",first_number&second_number);
	printf("first_number | second_number = %d\n",first_number|second_number);
	printf("first_number ^	second_number = %d\n",first_number^second_number);
	printf("first_number ~  = %d\n",first_number=~first_number);
	printf("second_number << 1 = %d\n",second_number<<1);
	printf("second_number >> 1 = %d\n",second_number>>1);
	return 0;
}