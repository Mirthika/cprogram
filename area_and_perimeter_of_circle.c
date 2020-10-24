/*Area_and_perimeter_of_circle*/
/*calculate the area and perimeter of a circle by getting the radius*/

#include<stdio.h>

int main()
{
	int area,perimeter,radius;
	const float pi=3.14;
	printf("Enter the radius=");
	scanf("%d",&radius);
	area=pi*radius*radius;
	printf("Area=%d\n",area);
	perimeter=2*pi*radius;
	printf("Peremiter=%d",perimeter);
	return 0;
}