#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[5],i;
	for(i=0; i<5; ++i)
		printf("%p\n",arr+i);
	printf("enter five numbers\n");
	for(i=0; i<5; ++i)
		scanf("%d",arr+i);
	for(i=0; i<5; ++i)
		printf("%d\n",*(arr+i));

	return 0;
	
}