/*arranging in ascending order*/
#include<stdio.h>

int main()
{
    int a,n,i,j,number[10];
    printf("enter the number of elements = ");
    scanf("%d",&n);
    for(i=0;i<n;++i){
        printf("enter the  number = ");
    scanf("%d",&number[i]);
    }
    for(i=0;i<n;++i)
    {
        for(j=i+1;j<n;++j)
        {
            if (number[i]>number[j])
            {
                a=number[i];
                number[i]=number[j];
                number[j]=a;
            }
        }
    }
    printf("the number in ascending order\n");
    for(i=0;i<n;++i)
    printf("%d\n",number[i]);
                        
    return 0;
}