#include<stdio.h>
int main()
{
	int n;
	printf("Enter n ");
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		for (int s=0;s<n-i-1;s++)
			printf("  ");
		for (int j=0;j<2*i+1;j++)
			printf("* ");
		printf("\n");
	}
	for (int i=0;i<n-1;i++)
	{
		for (int s=0;s<i+1;s++)
			printf("  ");
		for (int j=0;j<2*(n-i-1)-1;j++)
			printf("* ");
		printf("\n");
	}
	return 0;
}