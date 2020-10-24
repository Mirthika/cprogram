/*prime_number_2*/

#include<stdio.h>

int main()
{
    int low,high,a,isprime;
    printf("range=");
    scanf("%d %d",&low, &high);
    printf("Prime numbers between %d and %d are: ", low, high);
    while (low < high) {
      isprime = 0;
      if (low <= 1) {
         ++low;
         continue;
      }
   
        for(a=2;a<=low/2;++a){
        if(low%a == 0){
        isprime = 1;
        break;
        }
    }
        if (isprime == 0)
        printf("%d\t",low);
        ++low;
    }
    return 0;
}