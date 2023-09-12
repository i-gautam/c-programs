#include<stdio.h>
int main()
{
	float s1,s2,s3,s4,s5,per;
	printf("Enter marks of all 5 subjects /100\n");
	scanf("%f\n%f\n%f\n%f\n%f",&s1,&s2,&s3,&s4,&s5);
	per=(s1+s2+s3+s4+s5)/5;
	printf("Percentage of student is %f%%",per);
	return 0;
}
