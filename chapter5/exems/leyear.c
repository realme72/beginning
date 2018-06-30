#include <stdio.h>
int main ()
{
	int year;
	printf("enter year\n");
	scanf("%d",&year);
	if(year%100!=0 && year%4==0 ||year%400==0)
		printf("leap year\n");
	else
		printf("not leap\n");

	
	return 0;
}	