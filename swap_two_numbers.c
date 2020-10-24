/*swaptwonumbers*/
/*to swap the two numbers given by the user*/

#include<stdio.h>

int main()
{
	int first_number,second_number;
	printf("first_number=");
	scanf("%d",&first_number);
	printf("second_number=");
	scanf("%d",&second_number);
		int temp=first_number;
		first_number=second_number;
		second_number=temp;
	printf("after swapping");
	printf("\n");
	printf("first_number=%d",first_number);
	printf("\n");
	printf("second_number=%d",second_number);
	return 0;
}