/*maximum of three numbers*/
/*to find the maximum of three numbers using ternary operators*/

#include<stdio.h>

int main()
{
	int first_number,second_number,third_number,max;
	printf("Enter the three numbers = ");
	scanf("%d %d %d", &first_number, &second_number, &third_number);
	max = first_number>=second_number ? (first_number>=third_number):(second_number>=third_number ? second_number:third_number);
	printf("The gretest number is = %d",max);
	return 0;
}