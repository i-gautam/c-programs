#include<stdio.h>
int main()
{
	int n,r,s;
	printf("Enter the number = ");
	scanf("%d",&n);
	s=0;
	while (n!=0)
	{
		r=n%10;
		n=n/10;
		s+=r;
	}
	printf("Sum of digits = %d",s);
	return 0;
}