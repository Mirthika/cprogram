/*quotient and reminder*/
/*to find the quotient and reminder of two numbers*/

#include<stdio.h>

int main()
{
	int first_number,second_number,quotient,reminder;
	printf("first_number=");
	scanf("%d",&first_number);
	printf("second_number=");
	scanf("%d",&second_number);
	quotient=first_number/second_number;
	reminder=first_number%second_number;
	printf("quotient=%d",quotient);
	printf("\n");
	printf("reminder=%d",reminder);
	return 0;
}