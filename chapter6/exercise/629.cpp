#include <bits/stdc++.h>
using namespace std;

int func(int a,int b);
int f1(int x,int y);
int f2(int x,int y);

int main()
{
	int a,b;
	printf("enter a and b\n");
	scanf("%d%d",&a,&b);
	printf("%d\n",func(a,b));
	return 0;
}

int func(int a,int b)
{
	if(a==b)
	{
		return f1(a,b);

	}	
		return f2(a,b);
}
int f1(int x,int y)
{
	return x+y;
}
int f2(int x,int y)
{
	return x-y;
}