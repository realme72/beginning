#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i,arr[10]={2,5,4,1,8,9,11,6,3,7};
	int small,large;
	small=large=arr[0];

	for(i=1; i<10; ++i)
	{
		if(arr[i]<small)
			small=arr[i];
		if(arr[i]>large)
			large=arr[i];
	}
	printf("smallest=%d  largest =%d\n",small, large);

	return 0;
}	