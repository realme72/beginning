#include <stdio.h>
#include <string.h>

int main()
{
	char str1[10],str2[10];
	printf("Enter a string\n");
	scanf("%s",str2);
	strcpy(str1,str2);
	printf("first string :%s \t\t second string : %s\n",str1,str2);
	strcpy(str1,"Delhi");
	strcpy(str2,"Bangalore");
	printf("First string :%s\t\t Second string : %s\n",str1,str2);
	return 0;
}