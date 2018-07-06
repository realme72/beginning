#include <bits/std c++.h>
using namespace std;

int func(int x,int y);

int main()
{
	int a,b;
	printf("enter values for a and b\n");
	scanf("%d%d",&a,&b);
	a=func(a+b,a-b);
	printf("%d\n",a);
	return 0;
}

int  func(int x,int y)
{
	return x+y,x-y;
}