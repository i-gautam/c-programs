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
	for (int i=0;i<n/2;i++)
	{
		int c;
		c=arr[2*i];
		arr[2*i]=arr[2*i+1];
		arr[2*i+1]=c;
	}
	for (int i=0;i<n;i++)
		printf("%d",arr[i]);
}