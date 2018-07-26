#include <bits/stdc++.h>
using namespace std;

int main()
{
	int  a=10;
	int *p=&a;
	p=&a;

	printf("address p is %d\n",p);
	printf("value at address p is %d\n",*p);
	printf("size of integer is %d bytes\n",sizeof(int));
	printf("%d\n",p+1);
	printf("value at p+1 is %d\n",*(p+1));
}