#include <stdio.h>
int main ()
{
	int l,b,h,sarea,vol;
	printf("enter length ,width,height of a cuboid \n");
	scanf("%d %d %d",&l,&b,&h);
	while(l<=0 || b<=0 ||h<=0)	
	{
		printf("enter length,width,height of a cuboid\n");
		scanf("%d %d %d",&l,&b,&h);
	}
	sarea=2*(l*b+b*h+h*l);
	vol=l*b*h;

	printf("srface area=%d volume =%d\n",sarea, vol );


	return 0;
}