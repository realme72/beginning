#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,num,prod=1,r;

	printf("enter a number\n");
	scanf("%d",&num);

	while(num>0)
	{
		r=num%10;
		num=num/10;
		prod*=r;
	}
	printf("%d\n",prod);
	return 0;
}