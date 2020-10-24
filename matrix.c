#include <stdio.h>
int main() {
    int  matrix_1[3][3], matrix_2[3][3], sum[3][3], row, coloumn;
    

    printf("\nEnter elements of 1st matrix:\n");
    for (row = 0; row < 3; ++row)
        for (coloumn = 0; coloumn < 3; ++coloumn) {
            printf("Enter element %d%d: ", row + 1, coloumn + 1);
            scanf("%d", &matrix_1[row][coloumn]);
        }
        printf("\nEntered matrix: \n");
    for (row = 0; row < 3; ++row)
        for (coloumn = 0; coloumn < 3; ++coloumn) {
            printf("%d  ", matrix_1[row][coloumn]);
            if (coloumn == 3 - 1)
                printf("\n");}

    printf("Enter elements of 2nd matrix:\n");
    for (row = 0; row< 3; ++row)
        for (coloumn= 0; coloumn< 3; ++coloumn) {
            printf("Enter element %d%d: ", row + 1, coloumn + 1);
            scanf("%d", &matrix_2[row][coloumn]);
        }
        printf("\nEntered matrix: \n");
    for (row = 0; row < 3; ++row)
        for (coloumn = 0; coloumn < 3; ++coloumn) {
            printf("%d  ", matrix_2[row][coloumn]);
            if (coloumn == 3 - 1)
                printf("\n");}

    for (row = 0; row < 3; ++row)
        for (coloumn = 0; coloumn < 3; ++coloumn) {
            sum[row][coloumn] = matrix_1[row][coloumn]+matrix_2[row][coloumn];
        }

    
    printf("\nSum of two matrices: \n");
    for (row = 0; row < 3; ++row)
        for (coloumn = 0; coloumn < 3; ++coloumn) {
            printf("%d   ", sum[row][coloumn]);
            if (coloumn == 3 - 1) {
            
                printf("\n\n");
            }
        
        }

    return 0;
}