/*maximum of four numbers*/
/*to find the maximum of four numbers using ternary operators*/

#include<stdio.h>

int main()
{
	int first_number,second_number,third_number,fourth_number,max;
	printf("Enter the four numbers = ");
	scanf("%d %d %d %d", &first_number, &second_number, &third_number, &fourth_number);
	max = (first_number>=second_number && first_number>=third_number && first_number>=fourth_number) ? first_number:(second_number>=third_number && second_number>=fourth_number) ? second_number:(third_number>fourth_number) ? third_number:fourth_number;
	printf("The gretest number is = %d",max);
	return 0;
}