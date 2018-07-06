#include <bits/stdc++.h>
using namespace std;

void func(int a,static int b);

int main()
{
	func(1,2);
	func(3,4);
	return 0;
}

void func(int a,static int b)
{
	a++;
	b--;
	printf("%d %d\n",a,b);
}