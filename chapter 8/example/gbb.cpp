#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[10],min,n,i,temp;

	printf("enter numbers in arr\n");
	scanf("%d",&n);


	for(i=0;i<n;i++)
	{
		scanf("%d",&temp);
		arr[i]=temp;
	}
	min=arr[0];

	for(i=0;i<n;i++)
	{
		if(arr[i]<min)
			min=arr[i];
	}
	printf("%d\n",min);

	return 0;
}