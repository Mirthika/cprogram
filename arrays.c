/*sum of the arrays*/

#include <stdio.h>
int main()
{
     int a[100];
     int i,n,sum = 0;

     printf("Enter number of elements: ");
     scanf("%d", &n);

     for(i=0; i<n; i++)
     {
          printf("Enter number%d: ",i);
          scanf("%d", &a[i]);
          
     }
        for(i=0; i<n; i++)
        {
            sum += a[i];}
            printf("sum of all the elements in the array = %d\n\n",sum);
        
        return 0;
}
     