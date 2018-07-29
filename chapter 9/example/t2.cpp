#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a=1025;
	int *p;
	p=&a;

	printf("size of integer is %d bytes\n",sizeof(int));
	printf("address=%d, vlaue = %d\n",p,*p);

	void *p0;
	p0 = p;
	printf("address = %d",p0);

	return 0;
}