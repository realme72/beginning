#include <stdio.h>
int main ()
{
	int i=0,j=10,k=6;

	for(i=1; ;i++, j--, k=k-2)
	{
		if(i==j || k<0)
			break;
		printf("%d %d %d\n",i,j,k);

	}


	return 0;
}