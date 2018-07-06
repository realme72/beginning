#include <bits/stdc++.h>
using namespace std;

int max(int a,int b)
{
	return a>b ?a:b;
}
int main()
{
	int a,b,c;
	printf("enter values for a,b and c\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("%d\n",max(a,max(b,c)));
	return 0;
}