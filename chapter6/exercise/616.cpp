#include <bits/stdc++.h>
using namespace std;

int main()
{
	int func(int a,int b)
	{
		return (a+b);
	}
	int a,b,c;
	printf("enter values for a and b\n");
	scanf("%d%d",&a,&b);
	c=func(a,b);
	printf("%d\n",c);
	return 0;
}