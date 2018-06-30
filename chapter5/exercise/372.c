#include <stdio.h>
int main ()
{
	int n,sum =0;

	for( ; ; )
	{
		if(sum>100)
			break;
		scanf("%d",&n);
		sum+=n;
	}
	

	return 0;
}