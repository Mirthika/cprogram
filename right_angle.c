/*right ange teriangle*/

#include<stdio.h>

int main()
{
    int rows;
    printf("number of rows");
    scanf("%d",&rows);
    for(int a=1;a<=rows;a++){
        for(int i=1;i<=a;i++){
            printf("*");
        }
        printf("\n");
    }
}