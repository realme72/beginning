#include <bits/stdc++.h>
using namespace std;

int func(int k);
int main()
{
	int i,k;
	printf("enter values for i and k\n");
	scanf("%d%d",&i,&k);
	i+=func(k);
	i+=func(k);
	i+=func(k);
	printf("%d\n",i);
	return 0;
}

int func(int k)
{
	static int m=2;
	m=m+k;   
	return m;
}