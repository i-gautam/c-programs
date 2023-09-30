#include<stdio.h>
int main()
{
	int n,p,i;
	p=1;
	printf("Enter the number of which factorial is required ");
	scanf("%d",&n);
	for (i=2;i<=n;i++)
	{
		p=p*i;
	}
	printf("\n%d! = %d",n,p);
	return 0;
}