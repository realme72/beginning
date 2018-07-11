#include <bits/stdc++.h>
using namespace std;

int main()
{
	int num,arr[15],i,j;

	printf("Enter a decimal number\n");
	scanf("%d",&num);

	i=0;
	while(num>0)
	{
		arr[i]=num%2;
		num/=2;
		i++;
	}
	printf("Binary number is\n");
	for(j=i-1; j>=0; --j)
		printf("%d",arr[j]);
	printf("\n");

	return 0;
}