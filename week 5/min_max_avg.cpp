#include<stdio.h>
int main()
{
	int a[8]={2,5,1,7,9,4,11};
	for (int i=6;i>0;i--)
	{
		int c;
		if (a[i]>a[i-1])
			c=a[i];
			a[i]=a[i-1];
			a[i-1]=c;
	}
	int max=a[0];
	int min=max;
	for (int i=0;i<7;i++)
	{
		if (a[i]<min)
			min=a[i];
	}
	int s=0;
	for (int i=0;i<7;i++)
		s+=a[i];
	int avg=s/7;
	printf("Maximum = %d\nMinimum = %d\nAverage = %d",max,min,avg);
}