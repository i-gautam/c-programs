#include<stdio.h>
int main()
{
	int unit;
	float charge;
	printf("Enter the units consumed ");
	scanf("%d",&unit);
	if (unit<60)
	{
		charge=( unit*3.5 )+(4.5*unit);
	}
	else if (unit>=60 && unit <150)
	{
		charge = (60*3.5)+((unit-60)*4.5)+(4.5*unit);
	}
	else if (unit>=150)
	{
		charge = (60*3.5)+(150*4.5)+((unit-210)*5.5)+(4.5*unit);
	}
	printf("Your electricity bill is %f",charge);
	return 0;
}
