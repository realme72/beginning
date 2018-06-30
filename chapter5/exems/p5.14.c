#include <stdio.h>
int main ()
{
    int i=1;
    do{
    	printf("%d\t",i );
    	i=++i;

    }
    while (i<=10);
    printf("\n");

	return 0;
}