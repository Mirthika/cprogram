/*swaptwonumbers2*/

#include<stdio.h>

int main()
{
	int first_number,second_number;
	printf("first_number=");
	scanf("%d",&first_number);
	printf("second_number=");
	scanf("%d",&second_number);
	first_number=first_number+second_number;
	second_number=first_number-second_number;
	first_number=first_number-second_number;
	printf("after swapping");
	printf("\n");
	printf("first_number=%d",first_number);
	printf("\n");
	printf("second_number=%d",second_number);
	return 0;
}
	