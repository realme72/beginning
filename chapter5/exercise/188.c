#include <stdio.h>
int main ()
{
    int x,y;
    printf("enter values for x and y\t");
    scanf ("%d%d",&x,&y);
    switch (x)
    {
    	case 1:
    	      y=x+1;
    	      break;
    	case 2:
    	case 3:
    	case 4:
    	      y++;
    	      break;
    	case 5:
    	      y--;
    	      break;
    	case 6:
    	      y=0;       
    	            
    }
    printf("y is %d\n",y );


	return 0;
}