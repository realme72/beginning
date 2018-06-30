#include <stdio.h>
int main ()
{
	int i=1,z=0;

	while(i<5)
	{
		printf("%d\n",i);
		i++;
		z=z+2;
	}
	printf("%d %d\n",i,z);


	return 0;
}