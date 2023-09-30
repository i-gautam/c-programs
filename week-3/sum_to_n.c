#include<stdio.h>
int main()
{
	int n,s,i;
	s=0;
	printf("Enter the number upto which sum is required ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		s+=i;
	}
	printf("\nSum = %d",s);
	return 0;
}