#include <bits/stdc++.h>
using namespace std;

void func(int a,static int b);

int main()
{

	// static int i=2,j=4;

	func(1,2);
	func(2,4);
	return 0;
}

void func(int a,static int b)
{
	a++;
	b--;
	printf("%d %d\n",a,b);
}