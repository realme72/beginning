#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[5],i;

	for(i=0; i<5; ++i)
	{
		printf("Enter a value for arr[%d]\n",i);
		scanf("%d\t",&arr[i]);
	}

	printf("the array elements are\n");

	for(i=0;i<5;i++) printf("%d\n",arr[i]);
	
	printf("\n");

	return 0;
}