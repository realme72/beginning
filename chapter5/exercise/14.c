#include <stdio.h>
int main ()
{
    int k;
    printf("enter value for k\n");
    scanf("%d",&k);
    switch (k)
    {
    	case 5:
    		break;
    	case 10:
               k++;
               // continue;
        case 15:
        case 20:
        k--;       
    }
	return 0;
}