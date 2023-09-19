#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the sides of the triangle\n");
	scanf("%d  %d  %d",&a,&b,&c);
	if (a==b && b==c)
		printf("Triangle is EQUILATERAL");
	else if ((a==b && b!=c)||(b==c && c!=a)||(a==c && c!=b))
		printf("Triangle is ISOSCELES");
	else
		printf("Tiangle is SCALENE");
	return 0;
}
