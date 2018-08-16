#include <stdio.h>
#include <stdlib.h>
int main()
{
	char *str;
	str=(char *)malloc(10);
	printf("Enter a string\n");
	scanf("%s",str);
	printf("String is %s\n",str);
	return 0;

}