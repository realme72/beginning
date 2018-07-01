#include <bits/stdc++.h>
using namespace std;

int sum(int x,int y);

int main()
{
	int a,b,k;
	printf("Enter values for a,b\n");
	scanf("%d%d",&a,&b);
	k=sum(a*a,b*b);
	printf("%d\n",k);
	k=sum(a*b,a*b);
	printf("%d\n",k);
	return 0;
}
int sum(int x,int y)
{
	int s;
	s=x+y;
	return s;
}
