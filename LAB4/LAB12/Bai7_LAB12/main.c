#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
void swap(int* a, int* b);
int main()
{
	char c;
	do
	{
		int a, b;
		printf("Nhap a: ");
		scanf("%d", &a);

		printf("Nhap b: ");
		scanf("%d", &b);

		swap(&a, &b);

		printf("Sau khi hoan doi: a = %d\tb = %d\n", a, b);

		printf("Ban co muon tiep tuc?y/n: ");
		getchar();
		scanf("%c", &c);
		printf("-------------------------------------------\n");
	} while (c != 110);
	return 0;
}
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
