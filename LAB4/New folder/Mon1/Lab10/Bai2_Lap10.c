#include<stdio.h>

int main()
{
	const int i = 10;
	int* p = &i;
	*p = 5;
	printf("%d", *p);
	return 0;
}