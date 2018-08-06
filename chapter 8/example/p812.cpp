#include <bits/stdc++.h>
using namespace std;

#define row1 3
#define col1 4
#define row2 col1
#define col2 2

int main()
{
	int mat1[row1][col1],mat2[row2][col2],mat[row1][col2];
	int i,j,k;

	printf("Enter matrix mat1(%d*%d) row-wise \n",row1,col1);
	for(i=0; i<row1; ++i)
		for(j=0; j<col1; ++j)
			scanf("%d",&mat1[i][j]);

	printf("Enter matrix mat2(%d*%d) row-wise\n",row2,col2);
	for(i=0; i<col1; ++i)
		for(j=0; j<col2; ++j)
			scanf("%d",&mat2[i][j]);

	for(i=0; i<row1; ++i)
		for(j=0; j<col2; ++j)
			{
				mat[i][j] = 0;
				for(k=0; k<col1; ++k)
					mat[i][j] += mat1[i][k] + mat2[k][j];
			}
			printf("Enter the resultant matrix mat\n");
		for(i=0; i<row1; ++i)
		{
		    	for(j=0; j<col1; ++j)
		    		printf("%d ",mat[i][j]);
		    	printf("\n");
		    }

		    return 0;
			
}