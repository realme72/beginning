#include <bits/stdc++.h>
using namespace std;

void convert(int ,int);

int main ()
{
	int num;

	printf("enter a positive decimal number\n");
	scanf("%d",&num);
	printf("\n");

	convert(num,2);			printf("\t");
	convert(num,8);			printf("\n");
	convert(num,16);		printf("\n");

	return 0;
}

void convert(int num,int base)
{
	int rem = num%base;
	if(num==0)
		return ;
	convert (num/base,base);
	if(rem<10)
		printf("%d\n",rem);
	else 
		printf("%c\n",rem - 10 +'A');
}