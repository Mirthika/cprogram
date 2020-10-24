#include<stdio.h>
#include<math.h>

int main()
{
    double value_1;
    printf("enter the value");
    scanf("%lf",&value_1);
    printf ("value1 of greater rounding = %.1lf\n", ceil(value_1)); 
    printf("Value1 of lesser rounding = %.1lf\n", floor(value_1)); 
    return 0;
}