#include <bits/stdc++.h>
using namespace std;

void pfactors(int num);

int main ()
{
	int n;

	printf("enter a number\n");
	scanf("%d",&n);

	pfactors(n);
	
	return 0;
}

void pfactors(int num)
{
	int i=2;
	if (num==1)
		return ;
	while(num%i!=0)
	{
		i++;
	}
	printf("%d\n",i);
	pfactors(num/i);
}