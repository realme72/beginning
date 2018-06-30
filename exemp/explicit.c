#include <stdio.h>
int main ()
 
{
   int x=4,y=3;
   float p,q ;
   p=x/y;
   printf("p=% .2f\n",p);

   q= (float) x/y;
   printf("q =%.2f\n",q );
   return 0;

}