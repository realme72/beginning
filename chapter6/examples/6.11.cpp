#include <bits/stdc++.h>
using namespace std;
void displaymenu ()
int main ()
{
	int choice ;
	displaymenu();
	printf("enter your choice\n");
	scanf("%d",&choice);
	return 0;
}
void displaymenu()
{
	printf("1.create database\n");
	printf("2.insert new record\n");
	printf("3.modify a record\n");
	printf("4.delete a record\n");
	printf("5.display all records\n");
	printf("6.exit\n");
	
}