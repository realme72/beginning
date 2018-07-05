#include <bits/stdc++.h>
using namespace std;
#define lli long long int 

lli proddigits(lli num);

int main()
{
	lli num,answer;

	printf("Enter a number\n");
	scanf("%lld",&num);

	answer=proddigits(num);
	printf("\n\n%lld\n",answer);


	return 0;
}

lli proddigits(lli i)
{
	lli prod=1,r;

	while(i>0)
	{
		r=i%10;
		i=i/10;
		prod*=r;
		printf("%lld\n",prod);
	}

	return prod;
}