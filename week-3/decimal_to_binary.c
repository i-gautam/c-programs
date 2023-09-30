#include<stdio.h>
int main()
{
	int d,b,raw;
	printf("Enter the decimal number = ");
	scanf("%d",&d);
	raw=0;
	b=0;
	int r;
	while (d!=0);
	{
		r=d%2;
		d=d/2;
		raw=raw*10+r;
	}
	int l;
	do
	{
		l=raw%10;
		raw=raw/10;
		b=b*10+l;
	} while (raw!=0);
	printf("\nBinary = %d",b);
	return 0;
}