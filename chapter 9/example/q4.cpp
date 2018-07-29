#include <stdio.h>

int main()
{
	int a=5 , *pi=&a;
	char b='x', *pc=&b;
	float c=5.5, *pf=&c;
	printf("value of pi=Address of a =%p\n",pi);
	printf("value of pc=Address of b =%p\n",pc);
	printf("value of pf=Address of c =%p\n",pf);

	pi++;
	pc++;
 	pf++;

 	printf("Now vlaue of pi=%p\n",pi);
 	printf("Now vlaue of pc=%p\n",pc);
 	printf("Now vlaue of pf=%p\n",pf);

 	return 0;

}