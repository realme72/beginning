#include <bits/stdc++.h>
using namespace std;

void multiplicationtable(int num,int limit);

int main()
{
	int num,limit;
	
	printf("enter a number\n");
	scanf("%d",&num);
 
	printf("Enter a limit\n");
	scanf("%d",&limit);

	multiplicationtable(num,limit);
	return 0;

}

void multiplicationtable(int num,int limit)
{
	int i;
	for(i=1;i<=limit;i++)
	{
		printf("%d*%d=%d\n",num,i,num*i);
	}
}