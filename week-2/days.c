#include<stdio.h>
int main()
{
	int y,m;
	printf("Enter year ");
	scanf("%d",&y);
	printf("Enter mth no. ");
	scanf("%d",&m);
	if (m==1 || m==3||m==5||m==7||m==8||m==10||m==12)
		printf("Number of days in the month = 31");
	else if (m==4||m==6||m==9||m==11)
		printf("Number of days in the month = 30");
	else if (m==2)
		if (y%4==0 && (y%100!=0 || y%400==0))
			printf("Number of days in the month = 29");
		else
			printf("Number of days in the month = 28");
	return 0;
}
