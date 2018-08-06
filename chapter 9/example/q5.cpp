#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a=5;
	int *p;
	p=&a;

	printf("value of p = Address of a = %p\n",p);
	printf("value of p = %p\n",++p);
	printf("value of p = %p\n",p++);
	printf("value of p = %p\n",p);
	printf("value of p = %p\n",--p);
	printf("value of p = %p\n",p--);
	printf("value of p = %p\n",p);

	return 0;

}