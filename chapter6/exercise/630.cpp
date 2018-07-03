#include <bits/stdc++.h>
using namespace std;

int func(int n);

int main()
{
	int n;
	printf("Enter a number :\n");
	scanf("%d",&n);
	printf("%d \n",func(n));
	return 0;
}

int func(int n)
{
	int i;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			return 1;
			break;
		}
	}
	return 0;
}