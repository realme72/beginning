#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a=5, *ptr;
	ptr=&a;
	printf("Input a number\n");
	scanf("%d",ptr);
	printf("%d %d\n",a,*ptr);

	return 0;
}