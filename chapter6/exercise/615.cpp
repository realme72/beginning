#include <bits/stdc++.h>
using namespace std;

int square1(int a);
int square2(double a);
double square3(int a);
double square4(double a);

int main()
{
	double x=2.5,y;
	y=square1(x);
	printf("%lf\t",y);
	y=square2(x);
	printf("%lf\t",y);
	y=square3(x);
	printf("%lf\t",y);
	y=square4(x);
	printf("%lf\t",y);
	return 0;
}
int square1(int a)
{
	return a*a;
}
int square2(double a)
{
	return a*a;
}
double square3(int a)
{
	return a*a;
}
double square4(double a)
{
	return a*a;
}