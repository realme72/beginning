#include <stdio.h>
int main ()
{
    int i,n,sum=0,term=1;
    printf("enter number of terms\n");
    scanf ("%d",&n);
    for(i=1;i<=n; i++)
    	{
    		sum+=term;
    		term = term+i;
    	}
    	printf("the sum of series up to %d terms is %d\n",n,sum );


	return 0;
}