#include <bits/stdc++.h>
using namespace std;

int func(int n);

int main()
{

	printf("%d\n",func(2));
	printf("%d\n",func(5));
	printf("%d\n",func(2));
	return 0;
}

int func(int n)
{
	static int s=0;
	int i;
	for(i=1;i<=n;i++)
		s+=i;
	return s;
}