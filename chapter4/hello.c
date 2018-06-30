#include<stdio.h>
#include<math.h>
int main()
{

	int i;
	for(i=0; i<10; ++i){
		printf("vo hooo\n");	
	}
	
	float x1,x2;
	float b,a,c;
	
	printf("Please enter cofficients of equation a,b,c\n");
	scanf("%f%f%f",&a,&b,&c);
	
	x1=-1*b+pow(b*b-4*a*c,1/2);
	x2=-1*b-pow(b*b-4*a*c,1/2);
	
	printf("x1=%f x2=%f\n",x1/(2*a),x2/(2*a));
	
	return 0;
}


