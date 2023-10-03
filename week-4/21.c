#include<stdio.h>
int main()
{
	int n,s;
	printf("Enter starting integer ");
	scanf("%d",&s);
	printf("Enter n ");
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			if (j<=i)
				printf("%d ",s);
		}
		printf("\n");
		s++;
	}
	s--;
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			if (i<=j)
				printf("%d ",s);
		}
		printf("\n");
		s--;
	}
	return 0;
}