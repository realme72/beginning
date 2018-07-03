#include <bits/stdc++.h>
using namespace std;

int func(int x,int b);

int main()
{
	int a,b;
	printf("Enter values for a and b\n");
	scanf("%d%d",&a,&b);
	printf("%d\n",func(a,b));
}

int func(int x,int b)
{
	if(x==5)
		b=b+2;
	else
	
	 if(x>5)
	 	b=b+10;
		
	return b;
}