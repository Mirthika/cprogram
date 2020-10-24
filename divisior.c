/*to print all the numbers divisible by n*/
#include<stdio.h>
int main()
{
    int a = 1,divisior,range;
    printf("divisior\n");
    scanf("%d",&divisior);
    printf("range");
    scanf("%d ",&range);

    while(a<=range)
    {
        if((a%divisior) == 0){
           printf("%d\t",a);
        } 
            a++;
       /*divisible = 1;
        break;*/
        
    }
    /*if(divisible == 0)
     printf("%d\t",a);*/
    return 0;
}