#include <bits/stdc++.h>
using namespace std;

int func(int n, int base);

int main()
{
	int num,result,base;
	char choice;
	printf("enter 'b' for binary or 'o' for octal \n");
	scanf("%c",&choice);
	printf("enter a number\n");
	scanf("%d",&num);
	base= (choice=='b') ? 2 : 8;
	result = func (num,base);
	printf("Decimal number is %d\n",result);
	return 0;
}


int func(int n, int base)
{
	int rem,d,j=1,dec=0;
	
	while(n>0){
		d=rem*j;
		dec+=d;
		j*=base;
		n/=10;
	}

	return dec;
}