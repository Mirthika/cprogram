#include<stdio.h>

int generate_roll_number()
{
    static int number = 1;
    ++number;
    return number;

}

int main()
{
    int roll_number;
    printf("The 10 roll numbers are\n");
    for(int a=0;a<10;a++){
        roll_number=generate_roll_number();
        printf("%d\t",roll_number);

    }
    return 0;
}