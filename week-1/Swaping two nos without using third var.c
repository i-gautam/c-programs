#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter first no.");
	scanf("%d",&a);
	printf("\nEnter second no.");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("your first no is now %d\n",a);
	printf("your second no is now %d",b);
	return 0;
}
