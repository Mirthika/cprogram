 #include<stdio.h>
int main()
{
    int a,divisior,range,divisible = 0;
    printf("divisior\n");
    printf("range");
    scanf("%d %d",&divisior,&range);
    for(a=1;a<=range+1;a++)
        if(a%divisior==0){
        divisible = 1;
        break;
        }
    {if (divisible == 1)
    printf("%d",a);
    ++a;}
    return 0;
}