#include <bits/stdc++.h>
using namespace std;
#define size 10

int main()
{
	int arr[size],i,even=0,odd=0;
	for(i=0; i<size; ++i)
	{
		printf("Enter a value for arr[%d\n",i);
		scanf("%d",&arr[i]);
		if(arr[i]%2 == 0)
			even++;
		else
			odd++;
	}
	printf("Even numbers=%d  odd numbers=%d\n",even,odd);
	return 0;
}