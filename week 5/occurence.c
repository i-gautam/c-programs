#include<stdio.h>
int main()
{
	int n,k,c=0;
	printf("Enter size ");
	scanf("%d",&n);
	int arr[n];
	for (int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter number you want to find occurence of ");
	scanf("%d",&k);
	for (int i=0;i<n;i++)
	{
		if (k==arr[i])
			c++;
	}
	printf("%d appeared for %d times",k,c);
}