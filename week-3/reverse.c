#include<stdio.h>
int main()
{
	int n,r,rev;
	printf("Enter the number = ");
	scanf("%d",&n);
	while (n!=0)
	{
		r=n%10;
		n=n/10;
		rev=rev*10+r;
	}
	printf("Reverse = %d",rev);
	return 0;
}