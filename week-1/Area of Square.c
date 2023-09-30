#include<stdio.h>
int main()
{
	float side,area;
	printf("Enter side of the square");
	scanf("%f", &side);
	area=pow(side,2);
	printf("Area of the square is %f",area);
	return 0;
}
