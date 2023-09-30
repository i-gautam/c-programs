
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter first no ");
	scanf("%d",&a);
	printf("Enter second no ");
	scanf("%d",&b);
	c=a;
	a=a-a;
	a=a+b;
	b=b-b;
	b=b+c;
	printf("\nyour first no is %d\n",a);
	printf("your second no is %d",b);
	return 0;
}
