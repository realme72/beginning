#include <stdio.h>
int main ()
{
    float a,b,c,d,e;
    
    printf("enter values for a,b,c,d and e\n");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);

    printf("%f",(a+b+c+d+e)/500*100 );

	return 0;
}
