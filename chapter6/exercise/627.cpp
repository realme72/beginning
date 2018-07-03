#include <bits/stdc++.h>
using namespace std;

int func();

int main()
{
	int i;
	for(i=1;i<=6;i++)
		printf("%d\n",func());
	return 0;
}

int func()
{
	static int k=1;
	k*=2;
	return k;
}