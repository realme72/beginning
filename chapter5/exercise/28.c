#include <stdio.h>
int main ()
{
	int i,j,x=0;

	for(i=0;i<5;i++)
		for(j=1;j>0;j--)
			x=i+j+1;
	printf("x=%d\n",x );	

	return 0;
}