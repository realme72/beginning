#include <stdio.h>
int main()
{
	int n,nb,rem,d,j=1,dec=0;
	printf("enter the number in binary\n");
	scanf("%d",&n);
	nb=n;
	while(n>0)
	{
		rem=n%10;
		d=rem*j;
		dec+=d;
		j*=2;
		n/=10;
	}
	printf("binary number=%d,decimalnumber=%d\n",nb,dec );
	return 0;
}
