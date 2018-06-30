#include <stdio.h>
int main ()
{
	int i;

	while(i<=5)
	{
		if(i==3)
			continue;
		printf("%d\n",i);
		i++;

	}

	return 0;
}