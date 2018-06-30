#include <bits/stdc++.h>
void func1 ();
void func2 ();
int a,b=6;
int main ()
{
	printf("inside main () : a=%d b=%d\n",a,b);
	func1 ();
	func2 ();
	return 0;
}
void func1 ()
{
	printf("inside func1 () : a=%d b=%d\n",a,b);
}
void func2 ()
{
	int a=8;
	printf("inside func2 () : a=%d b=%d\n",a,b);

}
