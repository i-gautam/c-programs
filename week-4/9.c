#include<stdio.h>
int main()
{
	int n;
	printf("Enter n ");
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		for (int s=0;s<i;s++)
			printf(" ");
		for (int j=0;j<n;j++)
			printf("* ");
		printf("\n");
	}
	return 0;
}