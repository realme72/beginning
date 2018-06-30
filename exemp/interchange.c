#include <stdio.h>
int main ()

{
	int a=2,b=3, vamp;
	printf("a=%d,b=%d\n",a,b );
	vamp=a , a=b, b= vamp;
	printf("a=%d ,b=%d\n", a,b);
	return 0;


}