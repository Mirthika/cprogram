#include<stdio.h>
int main()    
{       
    int arr[100] ;     
        printf("Enter number of elements: ");
     scanf("%d", &arr);
       
    
    printf("Original array: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);     
    }      
        
    printf("\n");    
         printf("Array in reverse order: \n");    
    
    for (int i = length-1; i >= 0; i--) {     
        printf("%d ", arr[i]);     
    }     
    return 0;    
}    