#include <bits/stdc++.h>
using namespace std;
void selection (int age,float ht);
int main ()
{
	int age;
	float ht;
	printf("enter age and height\n");
	scanf("%d%f",&age,&ht);
	selection (age,ht);
	return 0;
}
void selection (int age,float ht)
{
	if (age>25)
		{
			printf("age should be less than 25\n");
			return ;
		}
	if	(ht<5)
		{
			printf("height should be greater than 5\n");
			return ;
		}
		printf("selceted\n");
}