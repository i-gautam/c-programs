#include<stdio.h>
int main()
{
	int p,c,b,m,com;
	float per;
	printf("Enter marks obtained (/100) in\n1. Physics\n2. Chemistry\n3. Biology\n4. Mathematics\n5. Computer\n");
	scanf("%d\n%d\n%d\n%d\n%d",&p,&c,&b,&m,&com);
	per=(p+c+b+m+com)/5;
	if (per>=90)
		printf("Percentage= %f\nGrade= A",per);
	else if (per<90 && per>=80)
		printf("Percentage= %f\nGrade= B",per);
	else if (per<80 && per>=70)
		printf("Percentage= %f\nGrade= C",per);
	else if (per<70 && per>=60)
		printf("Percentage= %f\nGrade= D",per);
	else if (per<60 && per>=40)
		printf("Percentage= %f\nGrade= E",per);
	else if (per<40)
		printf("Percentage= %f\nGrade= F",per);
	return 0;	
	
}
