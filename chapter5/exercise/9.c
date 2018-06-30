#include <stdio.h>
int main ()
{
    int a,b,x =0;
    printf("enter values for a and b\n");
    scanf("%d%d",&a,&b);
    if (a<b)
    	x+= (-x);
    else
    	x+=100;
    printf(" x=%d \n",x );
   

	return 0;
}