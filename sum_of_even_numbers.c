#include<stdio.h>

int main()
{
    int numbers[20];
    int sum;
    printf("enter thr numbers");
    scanf("%d,",&numbers);
    for(int i=0;i<numbers;i+2){
    sum += numbers[i];
    printf("sum =",numbers[i]);}
    return 0;
}