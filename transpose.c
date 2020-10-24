#include <stdio.h>
int main() {
    int matrix[3][3], transpose[3][3],  row, coloumn;
   
   
    printf("\nEnter matrix elements:\n");
    for (row = 0; row < 3; ++row)
        for (coloumn = 0; coloumn < 3; ++coloumn) {
            printf("Enter element a%d%d: ", row + 1, coloumn + 1);
            scanf("%d", &matrix[row][coloumn]);
        }

        printf("\nEntered matrix: \n");
            for (row = 0; row < 3; ++row)
                 for (coloumn = 0; coloumn < 3; ++coloumn) {
                    printf("%d  ", matrix[row][coloumn]);
                    if (coloumn == 3 - 1)
                    printf("\n");
        } 

   
    for (row = 0; row < 3; ++row)
        for (coloumn = 0; coloumn < 3; ++coloumn) {
            transpose[coloumn][row] =matrix[row][coloumn];
        }
        
    printf("\nTranspose of the matrix:\n");
            for (row = 0; row < 3; ++row)
                for (coloumn = 0; coloumn <3; ++coloumn) {
                 printf("%d  ", transpose[row][coloumn]);
                  if (coloumn == 3 - 1)
                     printf("\n");
        }
    return 0;
}