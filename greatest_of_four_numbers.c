/*greatestnumber*/
/*find the greatest value of the four numbers*/

# include<stdio.h>

int main()
{
  int A,B,C,D;
  printf("1stnumber=");
  scanf("%d",&A);
  printf("2ndnumber=");
  scanf("%d",&B);
  printf("3rdnumber=");
  scanf("%d",&C);
  printf("4thnumber=");
  scanf("%d",&D);
  if(A>B)
  {
    if(A>C)
     {
       if(A>D)
        {
          printf("%d is the greatest",A);
         }
      }
   }
  else if(B>C)
        {
          if(B>D)
           {
             printf("%d is the greatest",B);
           }
         }
    else if(C>D)
         {
           printf("%d is the greatest",C);
         }
    else
       {
          printf("%d is the greatest",D);
       }
      
  return 0;
}