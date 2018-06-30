#include <stdio.h>
int main ()
{
     int n,prod=1,rem;
     printf("enter a number\n");
     scanf("%d",&n);
     while(n>0)
     {
       rem=n%10;
       prod*=rem;
       n/=10;
     }
     printf("product of digits=%d\n",prod);


	return 0;
}