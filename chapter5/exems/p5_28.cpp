#include<stdio.h>
#include<math.h>
int main ()
{
    int i,n;
    printf("enter a number\n");
    scanf("%d",&n);
    int sqrts=pow(n,0.5);

    for(i=2;i<=sqrts;i++){
    	if(n%i==0)
    		break;
    }

    if(i>sqrts)
    	printf("%d is a prime number\n",n);
    else
    	printf ("%d is not a prime number\n",n);


    return 0;
}