/*prime numbers*/

#include<stdio.h>

int main()
{
    int a,i,isprime = 0;
    printf("a=");
    scanf("%d",&a);
    for(i=2;i<=a/2;++a){
        if(a%i == 0)
        isprime = 1;
        break;
    }
    {
        if (isprime == 0)
            printf("prime",a);
        else
            printf("not prime",a);
    }
    return 0;
}