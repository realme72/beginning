#include <stdio.h>
int main ()
{
	int i,j,k;

	for(k=1;k<=3;k++)
	{
		for(j=1;j<=5;j++)
		{
			for(i=1;i<=6;i++)
				printf("%d\t",i);
			printf("\n");
		}
		printf("\n");	
	}
	return 0;

}