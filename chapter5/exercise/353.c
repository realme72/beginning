#include <stdio.h>
#include <math.h>
int main ()
{
	int i,n;

	printf("enter value for n\n");
	scanf("%d",&n);

	for(i=2; i<=sqrt(n);i++)
		if (n%2==0)
			break;
		printf("%d\n",i);


	return 0;
}