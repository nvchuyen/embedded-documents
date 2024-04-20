#include<stdio.h>
void swap(int* a, int* b);
int main()
{
	char c;
	do
	{
		int a, b;
		int* p1 = &a;
		int* p2 = &b;

		printf("Nhap vao a: ");
		scanf("%d", p1);

		printf("Nhap vao b: ");
		scanf("%d", p2);

		swap(&a, &b);

		printf("Sau khi doi: \n");
		printf("a = %d\n", a);
		printf("b = %d\n", b);

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