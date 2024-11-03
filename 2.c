#include <stdio.h>
#include <stdlib.h>
#define MALLOC(p,n,type)\
p =(type*)malloc(n*sizeof(type));\
if (p == NULL){\
	printf("Insufficient memory\n");\
	exit(0);\
}

void main()
{
	int *p1, *p2;
	int prod;
	MALLOC (p1,1,int);
	MALLOC (p2,1,int);
	printf("%d\n",p1);
	printf("%d\n",p2);
	*p1 = 10;
	*p2 = 20;
	prod= *p1 * *p2;
	printf("\n%d * %d = %d\n",*p1,*p2,sum);
}
