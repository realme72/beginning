#include <bits/stdc++.h>
using namespace std;
int sum(int a);
int main ()
{
	int num;
	printf("enter a number\n");
	scanf("%d",&num);
	printf("sum of digits of %d is %d\n",num,sum(num));
	return 0;
}
int sum(int a)
{
	int sum =0;
	while(a>0)
	{
		sum+=a%10;
		a/=10;
	}
	return sum;
}