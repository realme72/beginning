#include <bits/stdc++.h>
using namespace std;

int add(int arr[],int n);

int main()
{
	int a[8]={2,4,6,8,10,12,14,16};
	int b[8]={1,3,5,7,9,11,13,15};
	int c[10]={1,2,3,4,5,6,7,8,9,10};

	printf("sum of elements of array a %d\n",add(a,8));
	printf("sum of elements of array b %d\n",add(b,8));
	printf("sum of elements of array c %d\n",add(c,10));

	return 0;

}

int add(int arr[],int n)
{
	int i,sum=0;
	for(i=0; i<n; ++i)
		sum+=arr[i];
	return sum;	
}