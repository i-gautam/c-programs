#include<stdio.h>
int main()
{
	int n;
	printf("Enter size");
	scanf("%d",&n);
	int arr[n];
	for (int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for (int i=0;i<(n+1)/2;i++)
	{
		int c;
		c=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=c;
	}
	for (int i=0;i<n;i++)
		printf("%d",arr[i]);
}