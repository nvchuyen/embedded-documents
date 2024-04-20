#include<stdio.h>

int main()
{
	int a = 51;
	int* ptr = (int *)&a;
	*ptr = 10;
	printf("gia tri a: %d", a);
	return 0;
}
