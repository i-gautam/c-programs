#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the upper limit");
	scanf("%d",&n);
	printf("\nEven Numbers upto %d are\n",n);
	i=2;
	while (i<=n)
	{
		printf("%d\n",i);
		i=i+2;
	}
	return 0;
}
