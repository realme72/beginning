#include <bits/stdc++.h>
using namespace std;

void func();
int main(){
	int i=5;
	for(i=i+1;i<8;i++)
		func();
	return 0;
}
void func()
{
	int j;
	for(j=1;j<3;j++)

		printf("%d\t",++j);
	printf("\n");
}