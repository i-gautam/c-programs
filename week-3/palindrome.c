#include<stdio.h>
int main()
{
	int n,r,rev,k;
	printf("Enter the number = ");
	scanf("%d",&n);
	k=n;
	while (n!=0)
	{
		r=n%10;
		n=n/10;
		rev=rev*10+r;
	}
	if (rev==k)
		printf("Number is palindrome");
	else
		printf("Number is not palindrome");
	return 0;
}