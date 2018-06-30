#include <bits/stdc++.h>
using namespace std;
void type (float a, float b, float c);
void area (float a, float b, float c);
int main ()
{
	float a,b,c;
	printf("enter the sides of triangle\n");
	scanf("%f%f%f",&a,&b,&c);
	if(a<b+c && b<c+a && c<a+b)
	{
		type(a,b,c);
		area(a,b,c);
	}
	else
		printf("no triangle exists with such sides\n");
	return 0;
}
void type (float a, float b, float c)
{
	if (a*a + b*b == c*c || b*b +c*c == a*a || c*c + a*a ==b*b)
		printf("right angled triangle\n");
	if (a==b && b==c )
		printf("equilateral triangle\n");
	
	else if (a==b || b==c || c==a)
		printf("isoceles triangle\n");
		
	else
		printf("scalane triangle\n");
}
void area (float a, float b, float c)
{
	float s,area;
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area of triangle =%f\n",area);
}
