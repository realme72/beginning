#include <stdio.h>
int main ()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    if(num%2==0)
    	printf("number is even\n");
    else
    {
    	printf("number is odd \n ");
    	num*=2;
    	printf("Now the number is %d\n",num);

    }


	
	return 0;
}