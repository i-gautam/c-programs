#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number ");
	scanf("%d",&n);
	i=0;
	while (n!=0)
	{
		n=n/10;
		i++;
	}
	printf("\nLength of the number = %d",i);
	return 0;
}