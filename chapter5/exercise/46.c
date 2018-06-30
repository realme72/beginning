#include <stdio.h>
int main ()
{
	int i;

	for (i=1;i<=80;i++)
	{
		if(i%8==0)
		printf("%d\n",i);
	else 
		printf("%d\t",i);
	}


	return 0;
}