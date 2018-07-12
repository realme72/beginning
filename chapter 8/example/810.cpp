#include <bits/stdc++.h>
using namespace std;

#define row 3
#define col 4

int main()
{
	int mat[row][col],i,j;
	printf("enter the elements of the matrix(%d*%d) row-wise\n",row,col);

	for(i=0; i<row; ++i)
		for(j=0; j<col; ++j)
			scanf("%d",&mat[i][j]);

	printf("the matrix that you have entered is \n");	

	for(i=0; i<row; ++i)
	{
		for(j=0; j<col; ++j)
			printf("%d\n",mat[i][j]);
		printf("\n");
		
	}
	

	return 0;
}