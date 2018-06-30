#include <bits/stdc++.h>
using namespace std;
int larger(int x, int y);
int main ()
{
	int x,y;
	printf("enter two numbers\n");
	scanf("%d%d",&x,&y);
	printf("larger=%d\n",larger(x,y));
		return 0;
}	
int larger(int x,int y)
{
	return x>y ? x:y;
}