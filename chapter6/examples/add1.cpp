#include <bits/stdc++.h>
using namespace std;
int reverse (int n);
int main ()
{
	int num;
	printf("enter a number\n");
	scanf("%d",&num);
	printf("%d\n",reverse(num));
	return 0;
}
int reverse (int n)
{
	int rev=0;
	do 
	{
		rev = rev*10 + n%10;
		n/=10;

	}while(n>0);
	return rev;
}