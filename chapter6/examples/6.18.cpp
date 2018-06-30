#include <bits/stdc++.h>
using namespace std;
long int reverse(long int n);
int ispalindrome(long int num);
int main ()
{
	long int num;
	printf("enter a number\n");
	scanf("%ld",&num);
	if (ispalindrome(num))
		printf("number is palindrome\n");
	else 
		printf("number is not a palindrome\n");
	return 0;
}
int ispalindrome(long int num)
{
	if (num==reverse(num))
		return 1;
	return 0;
}
long int reverse(long int n)
{
	long int rev=0;
	while(n>0)
	{
		rev=rev*10 +n%10;
		n/=10;
	}
	return rev;
	
}