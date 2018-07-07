#include <bits/stdc++.h>
using namespace std;

int rseries(int n);

int main()
{
	int n;

	printf("Enter number of terms\n");
	scanf("%d",&n);

	printf("%d\n",rseries(n));
	return 0;
}

int rseries(int n)
{
	int sum;
	if(n==0)
		return 0;
	return (n+rseries(n-1));
	printf("%d + ",n);
}