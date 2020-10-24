/*print a charecter*/
/*to print a charecter in rectangle form*/

#include<stdio.h>

int main()
{
    int a,i,rows,coloumns;
    printf("enter the number of rows");
    scanf("%d",&rows);
    printf("enter th enumber of coloumns");
    scanf("%d",&coloumns);
    for(i=1;i<=rows;++i)
    {
        for(a=1;a<=coloumns;++a)
        printf("*");
        printf("\n");
    }
   return 0; 
}