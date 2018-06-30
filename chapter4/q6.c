#include <stdio.h>
int main ()

{
	int x,y,z;
	x = 8++;
	y = ++x++;
	z =(x+y)--;
	printf("x= %d, y=%d,z=%d\n",x,y,z );
	return 0;
}