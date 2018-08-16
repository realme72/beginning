#include <stdio.h>
#include <string.h>

int main()
{
	char str1[20],str2[20];
	printf("Enter two strings\n");
	gets(str1);
	gets(str2);
	strcat(str1,str2);
	printf("first string is : %s\t second string :%s\n",str1,str2);
	strcat(str1," one");
	printf("Now first string is :%s\n",str1);
	return 0;
}