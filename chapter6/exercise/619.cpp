#include <bits/stdc++.h>
using namespace std;

int func(int a,int b);

int main()
{
	int i,j;
	printf("enter values for  i and j\n");
	scanf("%d%d",&i,&j);
	printf("%d\n",func(i,j));
	return 0;
}

int func(int a,int b)
{
	a=a-5;
	b=b+5;
	return (!a + --b);
}