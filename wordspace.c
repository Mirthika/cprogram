#include<stdio.h>
int main()
{
    char ch;
    printf("enter the whitespace");
    scanf("%c",&ch);
    if(ch>=0 && ch<=47)
    printf("whitespace",ch);
    else
    printf("not a whiteapace",ch);
    return 0;
}