/*increment and decrement*/
/*to find the increment and decrement value*/

#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter the two numbers=");
	scanf("%d %d",&a,&b);
	printf("Increment\n");
	printf("a++=%d\n",a++);
	printf("++a=%d\n",++a);
	printf("b++=%d\n",b++);
	printf("++b=%d\n",++b);
	printf("Decrement\n");
	printf("a--=%d\n",a--);
	printf("--a=%d\n",--a);
	printf("b--=%d\n",--b);
	printf("--b=%d\n",--b);
	return 0;
}