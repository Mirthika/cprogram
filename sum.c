/*sum*/
/*get a number from the user and find its sum*/

#include<stdio.h>

int main()
{
	int first_number,a,sum=0;
	printf("enter a number");
	scanf("%d",&first_number);
	for(a=1;a<=first_number;++a){
		sum=sum+a;
		printf("%d\t",a);
	}
	printf("\nsum of the numbers=%d",sum);
	return 0;
}