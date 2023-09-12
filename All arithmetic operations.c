#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	float g;
	printf("Enter first no.");
	scanf("%d",&a);
	printf("Enter second no.");
	scanf("%d",&b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=a%b;
	g=a/b;
	printf("Sum is %d\n",c);
	printf("Difference is %d\n",d);
	printf("Product is %d\n",e);
	printf("Quotient is %f\n",g);
	printf("Remainder of a/b %d\n",f);
	return 0;
}
