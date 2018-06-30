#include <stdio.h>
int main ()

{
   int a,b;
   printf("enter values a and b \n");
   scanf("%d%d",&a,&b);

   
   printf("%d",a>b?a-b:b-a);
   
   return 0;
}