/*greatest_of_four_numbers_2*/
/*find the greatest value of the four numbers*/

#include<stdio.h>

int main()
{
	int first_number,second_number,third_number,fourth_number;
	printf("Enter the four numbers=");
	scanf("%d %d %d %d",&first_number, &second_number, &third_number, &fourth_number);
	if(first_number>=second_number && first_number>=third_number && first_number>=fourth_number)
		printf("%d is big",first_number);
	if(second_number>=third_number && second_number>=fourth_number && second_number>=first_number)
		printf("%d is big",second_number);
	if(third_number>=first_number && third_number>=second_number && third_number>=fourth_number)
		printf("%d is big",third_number);
	if(fourth_number>=first_number && fourth_number>=second_number && fourth_number>=third_number)
		printf("%d is big",fourth_number);
	return 0;
}