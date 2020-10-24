/*arithmetic operation*/
/*get two numbers from the user and find the valuse for all the 4 arthimetic operation*/

#include <stdio.h>

int main()
{
    int first_number,second_number,answer;
	printf("first_number=");
    scanf("%d",&first_number);
	printf("second_number=");
    scanf("%d",&second_number);
    answer=first_number+second_number;
    printf("addition=%d\n",answer);
    answer=first_number-second_number;
    printf("subraction=%d\n",answer);
    answer=first_number*second_number;
    printf("multiplication=%d\n",answer);
    answer=first_number/second_number;
    printf("division=%d",answer);
    return 0;
}