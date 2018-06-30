#include <stdio.h>
int main ()
{
    int x,y=3;
    printf("enter values for x\n");
    scanf("%d",&x);
    switch(x)
    {
    	case 1:
                y =x+1;
                break;
    	case 2:
                x=y=0;
                break;
    	case 3:
    	case 4:
    	case 5:
                y++;
                break;
    	case 6:
                y+=4;
                break;
    	default:
            	y--;

    }
    printf("y is %d\n",y );

	return 0;
}