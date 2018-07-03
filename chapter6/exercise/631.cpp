#include <bits/stdc++.h>
using namespace std;

int func(int n);

int main()
{
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	printf("%d\n",func(n));
}

int func(int n)
{
	
	if(n==39)
	{
		n+=5;
		 
	}
	return n;
}