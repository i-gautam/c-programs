#include<stdio.h>
int main()
{
	int p1,p2,p3;
	printf("Enter the points of 3 techniques\n");
	scanf("%d\n%d\n%d",&p1,&p2,&p3);
	if (p1>p2 && p1>p3)
	{
		printf("Vinay should choose %d rated technique",p1);
	}
	else if (p2>p3)
	{
		printf("Vinay should choose %d rated technique",p2);
	}
	else if (p2<p3)
	{
		printf("Vinay should choose %d rated technique",p3);
	}
	else
	{
		printf("Enter valid points");
	}
	return 0;
}
