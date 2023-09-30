#include<stdio.h>
int main()
{
	int basic,reg;
	float sal;
	printf("Enter the basic salary ");
	scanf("%d",&basic);
	printf("Enter region of your organization\n1.R1\n2.R2\n3.R3\n4.R4\n");
	scanf("%d",&reg);
	if (reg==1)
	{
		sal=basic+(0.08*basic)+(0.44*basic)+(0.27*basic);
	}
	else if (reg==2)
	{
		sal=basic+(0.08*basic)+(0.44*basic)+(0.24*basic);
	}
	else if (reg==3)
	{
		sal=basic+(0.08*basic)+(0.44*basic)+(0.16*basic);
	}
	else if (reg==4)
	{
		sal=basic+(0.08*basic)+(0.44*basic)+(0.12*basic);
	}
	printf("Gross Salary = %f",sal);
	return 0;
}
