#include <bits/stdc++.h>
using namespace std;
int func(int a,int b,int c);
int main()
{
	int s;
	s=func(1,2,3);
	printf("%d\n",s);
	s=func(1,2,4);
	printf("%d\n",s);
	return 0;
}
int func(int a,int b,int c)
{
	return a+b+c;
}