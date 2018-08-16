#include <stdio.h>
int main()
{
	char name[50];
	printf("Enter a name :");
	gets(name);
	printf("Entered name is :");
	puts(name);
	return 0;
}