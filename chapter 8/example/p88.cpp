#include <bits/stdc++.h>
using namespace std;

void func(int val[]);

int main()
{
	int i,arr[6]={1,2,3,4,5,6};

	func(arr);

	printf("Contents of array are\n");
	for (i=0; i<6; i++)
		printf("%d\n",arr[i]);
	printf("\n");

	return 0;
}

void func(int val[])
{
	int sum=0,i;

	for(i=0; i<6; ++i)
	{
		val[i]=val[i]*val[i];
		sum+=val[i];
	}
	printf("sum of squares=%d\n",sum);
}