#include<stdio.h>
int main()
{
	int arr[]={19,7,10,56,11,9,2,4};
	int k;
	printf("Enter the value of k ");
	scanf("%d",&k);
	for (int i=0;i<k;i++)
	{
		for (int j=7;j>0;j--)
		{
			int c;
			if (arr[j]>arr[j-1])
			{
				c=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=c;
			}			
		}
	}
	int max_k=arr[k-1];
	for (int i=0;i<k;i++)
	{
		for (int j=7;j>0;j--)
		{
			int c;
			if (arr[j]<arr[j-1])
			{
				c=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=c;
			}			
		}
	}
	int min_k=arr[k-1];
	printf("%dth smallest number= %d\n%dth largest number= %d",k,min_k,k,max_k);
}