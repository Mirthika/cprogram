/*greatest_of_three_numbers*/
/*find the greatest value of the three numbers*/

#include<stdio.h>

int main()
{
	int first_number,second_number,third_number;
	printf("Enter the first_number,second_number and third_number=");
	scanf("%d %d %d",&first_number, &second_number, &third_number);
	if(first_number>=second_number && first_number>=third_number)
		printf("%d is the greatest",first_number);
	if(second_number>=first_number && second_number>=third_number)
		printf("%d is the greatest",second_number);
	if(third_number>=first_number && third_number>=second_number)
		printf("%d is the greatest",third_number);
	return 0;
}