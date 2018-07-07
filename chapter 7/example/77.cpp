#include <bits/stdc++.h>
using namespace std;

int fib(int n);

int main()
{
	int nterms,i;
	printf("Enter number of terms\n");
	scanf("%d",&nterms);
	printf("\n");

	for(i=0;i<nterms;i++)
		printf("%d\n",fib(i));
	printf("\n");
	return 0;
}

int fib(int n)
{
	if(n==0 || n==1)
		return 1;
	return (fib(n-1) + fib(n-2));
}