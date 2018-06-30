#include <stdio.h>
int main ()
{
    int n,num;
    long  fact=1;
    printf("enter a number\n");
    scanf("%d",&n);
    num=n;
    if(n<0)
    	printf("no factorial of a negative number\n");
    else
    {
    	while(n>=1)
    	{
    		fact*=n;
    		n--;
    	}
    	printf("factorial of %d=%ld\n",num,fact);
    }

	return 0;
}
