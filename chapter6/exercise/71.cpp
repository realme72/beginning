#include <bits/stdc++.h>
using namespace std;

long int fact(int n);

int main()
{
	int num;

	printf("Enter a number\n");
	scanf("%d",&num);

	if (n<0)
		printf("No factorial exists\n");
	else
		printf("factorial of %d is %ld\n",num,fact(num));
	return 0;
}

long int fact(int n)
{
	if(n==0)
		return 1;
	return (n*fact(n-1));
}