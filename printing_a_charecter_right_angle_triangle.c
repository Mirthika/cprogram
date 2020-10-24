/*printing a char*/
/*print a charecter right angle*/

#include<stdio.h>
int main()
{
    int rows;
    printf("enter the number");
    scanf("%d",&rows);
    for(int a=rows;a>=1;--a)
    {
        for(int i=1;i<=a;++i){
        printf("*");
        }
    printf("\n");
    }
    return 0;
}