#include <bits/stdc++.h>
using namespace std;

void primefactor(int num);

int main()
{
	int num;
	printf("Enter a number\n");
	scanf("%d",&num);
	primefactor(num);
	printf("\n");
	return 0;
}
void primefactor(int num)
{
	int i;
	for(i=2;num!=1;i++)
		while(num%i==0)
		{
			printf("%d\n",i);
			num=num/i;
		}
}