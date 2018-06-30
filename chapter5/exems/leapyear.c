#include <stdio.h>
int main ()
{
	int year;
	printf("enter year\n");
	scanf("%d",&year);
	if(year%100 != 0)

	{
     if (year%4==0)
     printf("Leap year\n");
     else
     printf("Not Leap year\n"); 
	}
	else
	{
		if(year%400==0)
			printf("Leap year\n");
		else
			printf("Not leap year\n");
	}
	return 0;
}	