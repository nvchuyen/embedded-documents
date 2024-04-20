#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int add(int* a, int* b);
int main()
{
	char c;
	do
	{
		int a, b, z;
		printf("Nhap a: ");
		scanf("%d", &a);

		printf("Nhap b: ");
		scanf("%d", &b);

		z = add(&a, &b);
		printf("Sum = %d\n", z);
		printf("Ban co muon tiep tuc?y/n: ");
		getchar();
		scanf("%c", &c);
		printf("-------------------------------------------\n");
	} while (c != 110);
	return 0;
}
int add(int* a, int* b)
{
	int z = *a + *b;
	return z;
}
