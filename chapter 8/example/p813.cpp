#include <bits/stdc++.h>
using namespace std;

#define row 3
#define col 4

int main()
{
	int mat1[row][col],mat2[row][col],i,j;

	printf("Enter matrix mat1(%d*%d) row-wise\n",row,col);
	for(i=0; i<row; ++i)
		for(j=0; j<col; ++j)
			scanf("%d",&mat1[i][j]);

	for(i=0; i<col; ++i)
		for(j=0; j<row; ++j)
			mat2[i][j] = mat1[j][i];

	printf("Transpose of a matrix is\n");
		for(i=0; i<col; ++i)
		{
			for(j=0; j<row; ++j)
				printf("%d ",mat2[i][j]);
			printf("\n");
		}

		return 0;
}