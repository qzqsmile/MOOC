#include<stdio.h>
#include<stdlib.h>

enum name {QIAN, LIANG};

int main(void)
{
	int *p = malloc(sizeof(*p));
	printf("p is %d\n", *p);
	enum name s;
	s = QIAN;	

	return 0;
}
