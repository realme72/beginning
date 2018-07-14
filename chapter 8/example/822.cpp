#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[4][4],i,j;

	for(i=0; i<4; ++i)
		for(j=0; j<4; ++j)
			scanf("%d",&arr[i][j]);

	for(i=0; i<4; ++i)	
	{
		for(j=0; j<4; ++j)
			printf("%d\n",arr[i][j]);
		printf("\n");
	}

	return 0;
}