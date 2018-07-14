#include <bits/stdc++.h>
using namespace std;

#define row 3 
#define col 4

int main()
{
	int i,j,mat1[row][col],mat2[row][col],mat[row][col];

	printf("Enter matrix mat1(%d*%d) row-wise \n",row,col);
	for(i=0; i<row; ++i)
		for(j=0; j<col; ++j)
			scanf("%d",&mat1[i][j]);

	printf("Enter a matrix mat2(%d*%d) row-wise \n",row,col);
	for(i=0; i<row; ++i)
		for(j=0; j<col; ++j)
			scanf("%d",&mat2[i][j]);

	for(i=0; i<row; ++i)
		for(j=0; j<col; ++j)
			mat[i][j] = mat1[i][j] + mat2[i][j];

	printf("The resultant matrix mat is\n");
	for(i=0; i<row; ++i)
	{
		for(j=0; j<col; ++j)
			printf("%d ",mat[i][j]);
		printf("\n");
	}

	return 0; 
}