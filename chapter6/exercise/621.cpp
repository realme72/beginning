#include <bits/stdc++.h>
using namespace std;

void func(int a,int b);

int main()
{
	int i,j;
	printf("enter values for i and j\n");
	scanf("%d%d",&i,&j);
	func(i/2,j%3);
	return 0;
}

void func(int a,int b)
{
	a/=2;
	b--;
	printf("%d\n",a+b);
}