#include <stdio.h>
int main ()
{
	int x=0,sum=0;

	while(x<10)
	{
		x++;
		if(x%2!=0)
			
		sum+=x;
	}
	printf("%d %d\n",x,sum);


	return 0;
}