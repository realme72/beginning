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
    	break;
    	case 2:
    	printf("second\n");
    	break;
    	case 3:
    	printf("third\n");
    	break;
    	default:
    	printf("wrong choice\n");

    }


	return 0;
}