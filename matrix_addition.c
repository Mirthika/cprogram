#include<stdio.h>

int main()
{
    int matrix_1 [3][3],matrix_2 [3][3];
    int row = 3;
    int column = 3;
    int sum[row][column];
    for(row=0;row<3;++row)
        
            for(column=0;column<3;++column){

            printf("enter the numbers %d%d",row+1,column+1);
            scanf("%d",&matrix_1[row][column]);
        }
    for(row=0;row<3;++row)
        
            for(column=0;column<3;++column)
            printf("enter the numbers %d%d",row+1,column+1);{
            scanf("%d",&matrix_2[row][column]);
        }
        for(row=0;row<3;++row)
        
            for(column=0;column<3;++column)
            {
            sum[row][column]=matrix_1[row][column]+matrix_2[row][column];
        }
            printf("sum of the numbers");
        
    for(row=0;row<3;++row)
        
            for(column=0;column<3;++column){
            printf("%d",sum[row][column]);
            printf("\n\n");
            }
            return 0;
}