#include<stdio.h>
int main()
{
	float num,cube;
	printf("Enter the Number ");
	scanf("%f",&num);
	cube=pow(num,3);
	printf("Cube of the number is %f",cube);
	return 0;
}
