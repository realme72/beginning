#include <bits/stdc++.h>
using namespace std;

int func(int a,int b,int c);

int main()
{
	int x=1,y=2,z=3,result;
	result=func(x,y,(z=5,z+10));
	printf("x=%d y=%d z=%d\n",x,y,z);
	printf("result=%d\n",result);
	return 0;
}
int func(int a,int b,int c)
{
	return 2*(a+b+c);
}