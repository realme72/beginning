#include <bits/stdc++.h>
using namespace std;
void printprimes (int num1 ,int num2);
int isprime(int n);
int main ()
{
	int num1,num2;
	printf("enter two numbers\n");
	scanf("%d%d",&num1,&num2);
	printf("prime numbers between %d and %d are\n",num1,num2);
	printprimes(num1,num2);
	return 0;
}
void printprimes(int num1,int num2)
{
	int i;
	for(i=num1;i<=sqrt(num2);i++)
		if(isprime(i))
			printf("%d\n",i);
}
int isprime(int n)
{
	int i;
	for(i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return 0;
	return 1;
}
