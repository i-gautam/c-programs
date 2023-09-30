#include<stdio.h>
int main()
{
	float km,m,cm,mm;
	printf("Enter distance in kilometer ");
	scanf("%f",&km);
	m=km*1000;
	cm=km*100000;
	mm=km*1000000;
	printf("Distance in meter %f m\n",m);
	printf("Distance in centimeter %f cm\n",cm);
	printf("Distance in milimeter %f mm",mm);
	return 0;
}
