#include<stdio.h>
int main()
{
	int n,r;
	printf("Enter the number ");
	scanf("%d",&n);
	r=n%10;
	while (n/10!=0)
	{
		n=n/10;
	}
	printf("\nsum of first and last digit = %d",n+r);
	return 0;
}