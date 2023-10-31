#include<stdio.h>
int main()
{
	int a[8]={3,7,8,5,1,9,6};
	for (int i=0;i<7;i++)
	{
		for (int j=0;j<6-i;j++)
		{
			int c;
			if (a[j]<a[j+1])
			{
				c=a[j];
				a[j]=a[j+1];
				a[j+1]=c;
			}
		}
	}
	for (int i=0;i<7;i++)
	{
		printf(" %d,",a[i]);
	}
}