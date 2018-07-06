#include <bits/stdc++.h>
using namespace std;
#define lli long long int

lli summation(lli n);

int main()
{
	lli num,answer;

	printf("Enter a number\n");
	scanf("%lldd",&num);

	answer=summation(num);
	printf("%lldd\n",answer);
	return 0;
}

lli summation(lli n)
{
	if(n==0)
		return 0;
	return (n+ summation(n-1));
}