#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the first no. ");
	scanf("%d",&a);
	printf("Enter the second no. ");
	scanf("%d",&b);
	printf("Enter the third no. ");
	scanf("%d",&c);
	if (a>b && a>c)
		printf("%d is greatest",a);
	else if (b>c)
		printf("%d is greatest",b);
	else
		printf("%d is greatest",c);
	return 0;
}
