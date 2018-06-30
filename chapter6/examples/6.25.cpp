#include <bits/stdc++.h>
using namespace std;

long factorial(int);
long comb(int,int);

int main()
{
	int i,j,k;
	printf("enter number of rows\n");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		for(j=0;j<=i;j++)
			printf("%ld\n",comb(i,j));
		printf("\n");
	}
	return 0;
}
long comb(int n,int r)
{
	long c;
	c=factorial(n)/factorial(n-r)*factorial(r);
	return  c;
}
long factorial(int n)
{
	int i;
	long int fact=1;
	if (n==0)
		return 1;
	for(i=n;i>1;i--)
		fact*=i;
	return fact;
}
