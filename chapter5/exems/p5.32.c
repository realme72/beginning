#include <stdio.h>
int main ()
{ 
	int choice;
	printf("enter your choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		printf("first\n");
		case 2:
		printf("second\n");
		case 3:
		printf("third\n");
		default:
		printf("wrong choice\n");

	}

	return 0;
}
