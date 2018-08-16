#include <stdio.h>
#include <string.h>
int main()
{
	char str[50];
	printf("Enter a string \n");
	gets(str);
	printf("Length of the string is %u\n",strlen(str));
	return 0;
}