#include <bits/stdc++.h>
using namespace std;
long int factorial(int n);
int main ()
{
	int num;
	printf("enter a number\n");
	scanf("%d",&num);
	if(num<0)
		printf("no factorial exists\n");
	else
		printf("factorial of %d is %ld \n",num,factorial(num));
	return 0;
}	
long int factorial(int n)
{
	int i;
	long int fact =1;
	if (n==0)
		return 1;
	for(i=n;i>1;i--)
		fact*=i;
	return fact;
}