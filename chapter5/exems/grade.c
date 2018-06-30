#include <stdio.h>
int main ()
{
	int marks; 
	char grade;
	
	// printf("enter marks and grade\n");
	// scanf("%d%c",&marks,&grade);
	// printf("%d,%c\n",marks,grade);
	
	// if(grade=='A'){
	//        	if (marks>95)
	//        		printf("Excellent\n");
	// }else
	// 	printf("work hard for getting A grade\n");

	scanf("%d%c",&marks,&grade);
	printf("%d%c\n",marks,grade);

	if(grade=='A'){
		if(marks>95)
			printf("Excellent\n");
	}
	else
		printf("Work hard brow\n");

	return 0;
}