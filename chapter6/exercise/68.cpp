#include <bits/stdc++.h>
using namespace std;

int min(int a,int b);

int main()
{
	int a=10,b=5;
	printf("%d\n",min(a,b));
	return 0;
}
int min(int a,int b)
{
	return a<b?a:b;
}