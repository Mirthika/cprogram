/*to print the vowels in a array*/
#include<stdio.h>

int main()
{
   /* int numarray[10] = {1,2,3,4,5,6,7,8,9,10};*/
    char vowels_array[10] = {'a','e','i','o','u','A','E','I','O','U'};
    char alphabet,vowel = 'n';
        printf("enter a alphabet : ");
        scanf("%c",&alphabet);
        
            for(int i=0;i<10;i++){ 
               
                    if (vowels_array[i] == alphabet){
                        
    
                        vowel = 'y' ; //printf("vowel");
                        break;
                    }
            }
        if (vowel == 'y')
            printf("vowel");
     else
        printf("not a vowel")  ;
            
          return 0;
}