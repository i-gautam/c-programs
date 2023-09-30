#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number of which table is required ");
	scanf("%d",&n);
	i=1;
	do
	{
		printf("\n%d x %d = %d",n,i,n*i);
		i++;
	} while (i<11);
	return 0;
}