#include <bits/stdc++.h>
using namespace std;

int sum(int x,int y);
int multiply(int x,int y);

int main()
{
	int m,n;
	printf("Enter values for m and n\n");
	scanf("%d%d",&m,&n);
	printf("%d\t",multiply(m,n));
	printf("%d\t",multiply(m+n,m-n));
	printf("%d\t",multiply(sum(m,n),m));
}
int multiply(int x,int y)
{
	return x*y;
}
int sum(int x,int y)
{
	return x+y;
}