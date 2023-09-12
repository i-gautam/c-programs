#include<stdio.h>
int main()
{
	float p,r,t,si,ci;
	printf("Enter the Principal Amount ");
	scanf("%f",&p);
	printf("Enter the Rate of Interest ");
	scanf("%f",&r);
	printf("Enter the Time of Interest (in years)");
	scanf("%f",&t);
	si=p*r*t/100;
	ci=p*(pow((1+(r/100)),t)-1);
	printf("Simple interest is %f\n",si);
	printf("Compound interest is %f",ci);
	return 0;
}
