#include<stdio.h>
int main()
{
    char a;
    printf("enter the charecter : ");
    scanf("%c",&a);
    if (a>=48 && a<=57)
        printf("numeric charecter",a);
    else
        printf("not a numeric chareter",a);
    return 0;
}