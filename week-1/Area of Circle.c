#include<stdio.h>
int main()
{
	float rad, area;
	printf("Enter radius of the circle ");
	scanf("%f", &rad);
	area = 3.14*rad*rad;
	printf("Area of the circle is %f",area);
	return 0;
}
