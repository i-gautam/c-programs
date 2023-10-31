#include<stdio.h>
int main()
{
	int n,c=0;
	printf("Enter size ");
	scanf("%d",&n);
	int arr[n+1];
	for (int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for (int i=0;i<n-1;i++)
	{
		for (int j=i+1;j<n;j++)
		{
			if (arr[i]==arr[j])
            	printf("%d, ",arr[i]);
		}
	}

}