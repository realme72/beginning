#include <stdio.h>
int main ()
{
	int i=1,j=3;

	while(i<5 && j!=0)
	{
		
		printf("%d %d\n",i++,j--);
	}
	
	return 0;
}