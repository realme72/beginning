#include <bits/stdc++.h>
using namespace std;
int diff(int x,int y)
{
	return x-y;
}
int sum(int x,int y)
{
	return x+y;
}

int main()
{
	int a,b,c,d;
	printf("enter values for a,b,c and d\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf("%d\t",a + diff(d,c));
	printf("%d\n",diff(a,sum(diff(b,c),d)));
	return 0;
}