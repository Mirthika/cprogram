#include<stdio.h>
#include<math.h>

int main()
{
    double value_1,power;
    printf("enter the value and power");
    scanf("%lf %lf",&value_1,&power);
    printf("Value  = %lf\n", pow(value_1,power));
    return 0;
}