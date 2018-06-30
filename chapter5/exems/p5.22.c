#include <stdio.h>
int main ()
{
    int n,sum=0,rem;
    printf("enter a number\n");
    scanf("%d",&n);
    for (; n>0;n/10)
    {
    	rem=n%10;
    	sum+=rem;

    }
    printf("sum of digits =%d\n",sum);

	return 0;
}