#include<stdio.h>
int main()
{
	int a,b,n,s;
	a=0;
	b=1;
	printf("Enter the number =");
	scanf("%d",&n);
	if (n==1)
		s=0;
	else if (n==2)
		s=1;
	else if (n>2)
	{
		for (int i=2;i<n;i++)
		{
			s=a+b;
			a=b;
			b=s;
		}
	}
	printf("\n%dth term of the series = %d",n,s);
	return 0;
}