#include <stdio.h>
int main ()

{
    int x;
    printf("enter a number\n");
    scanf ("%d",&x);
    if (x<0)
    {
    	printf("number entered is negative\n");
    	x =-x;
    }

        printf("value ofx is :%d\n",x);


	return 0;
}