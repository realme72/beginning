#include <stdio.h>
int main ()
{
	int i,j;

	for(j=1+1,i=1;i<=5;j++,i++)
		printf("%d %d\n",i,j);

	return 0;
}