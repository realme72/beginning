#include <bits/stdc++.h>
using namespace std;
void func (int a , int b);
int main ()
{
	int x,y;
	printf("enter values for x and y\n");
	scanf("%d%d",&x,&y);
	func(x,y);
	printf("x=%d y=%d\n",x,y);
	return 0;
}
void func (int a , int b)
{
	a++;
	b--;
	printf("a=%d b=%d\n",a,b);
}