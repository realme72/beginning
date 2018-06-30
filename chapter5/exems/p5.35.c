#include <stdio.h>
int main ()
{
    char ch;
    printf("enter an alphabet\n");
    scanf("%c",&ch);
    switch (ch)
    {
    	case 'a':
    	case 'e':
    	case 'i':
    	case 'o':
    	case 'u':
    	printf("alphabet is a vowel\n");
    	break ;
    	default:
    	printf("alphabet is a constant\n");
    }


	return 0;
}