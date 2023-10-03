#include<stdio.h>
int main()
{
	int n;
	printf("Enter n ");
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<2*n;j++)
		{
			if (j<=i || j>=2*n-i-1)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<2*n;j++)
		{
			if (j<=n-i-1 || j>=n+i)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
	return 0;
}