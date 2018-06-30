#include <stdio.h>
int main ()
{
    long num;
    int dig,sum;
    printf("enter a number\n");
    scanf("%ld",&num);
    printf("%ld->\n",num );
    do
    {
    	sum=0;
    	while(num!=0)
    	{
    		dig=num%10;
    		sum+=dig;
    		num/=10;
    	}
    	printf("%d\t",sum );
    	num=sum;
    }
    while(num/10!=0);

	return 0;
}