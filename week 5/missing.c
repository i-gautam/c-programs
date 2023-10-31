#include<stdio.h>
int main()
{
	int s=0,c=0;
	int arr[]={3,1,2,6,4,5,8};
	for (int i=0;i<8;i++)
		s+=arr[i];
	int max=arr[0];
	for (int i=1;i<=8;i++)
	{
		c+=i;
	}
	int miss=c-s;
	printf("missing number is %d",miss);
}