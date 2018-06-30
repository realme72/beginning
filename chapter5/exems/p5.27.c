#include <stdio.h>
int main ()
{
    int n;
    for(n=1;n<=5;n++)
    {
    	if(n==3)
    		break;
    	printf("Numbers =%d\n",n );
    }
      printf("out of for loop\n");

	return 0;
}