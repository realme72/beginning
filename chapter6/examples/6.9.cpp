#include <bits/stdc++.h>
using namespace std;
float find (int n);
int main ()
{
	int num;
	printf("enter a number\n");
	scanf("%d",&num);
	find(num);
	return 0;
}
float find (int n)
{
	if (n%2==0)
		printf("number is even\n");
	else
		printf("numver is odd\n");
}