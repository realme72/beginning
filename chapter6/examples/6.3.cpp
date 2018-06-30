#include <bits/stdc++.h>
int sum(int x,int y);
int main ()
{
	int a,b,s;

	printf("enter values for a and b\n");
	scanf("%d%d",&a,&b);

	s=sum(a,b);
	
	printf("sum of %d and %d is %d\n",a,b,s);

	return 0;
}
int sum(int x,int y)
{
	int s;
	s=x+y;	
	return s;
}