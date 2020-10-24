/*grade_of_marks*/
/*to find the grade based on marks*/

#include<stdio.h>

int main()
{
	int mark;
	printf("Enter your mark = ");
	scanf("%d",&mark);
	{
		if (mark>100 || mark<0)
			printf("wrong entry");
		else if ( mark<50)
			printf("YOUR GRADE IS : F");
		else if (mark>=50 && mark<60)
			printf("YOUR GRADE IS : D");
		else if (mark>=60 && mark<70)
			printf("YOUR GRADE IS : C");
		else if (mark>=70 && mark<80)
			printf("YOUR GRADE IS : B");
		else if (mark>=80 && mark<90)
			printf("YOUR GRADE IS : A");
		else if (mark>=90 && mark<100)
			printf("YOUR GRADE IS : O");
		return 0;
	}
}