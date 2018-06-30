#include <stdio.h>
int main ()
{
	int i;
	do
	{
		if(i==3)
			continue;
		printf("%d\n",i);
		i++;
	}while(i<=5);

	return 0;
}