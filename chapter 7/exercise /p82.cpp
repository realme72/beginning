#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[10],i,sum=0;

	for(i=0; i<10; ++i)
	{
		printf("enter a value for arr[%d]\n",i);
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	printf("sum=%d\n",sum);

	return 0;
}