#include <bits/stdc++.h>
using namespace std;

void check(int num);

int main()
{
	int arr[10],i;

	printf("enter the array elements \n");
	for(i=0; i<10; ++i)
	{
		scanf("%d",&arr[i]);
		check(arr[i]);
	}

	return 0;
}

void check(int num)
{
	if(num%2==0)
		printf("%d is even\n",num);
	else
		printf("%d is odd\n",num);
}