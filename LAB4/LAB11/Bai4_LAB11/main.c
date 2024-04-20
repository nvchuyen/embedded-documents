#include<stdio.h>

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

		printf("Tong cua hai so %d va %d la: %d\n", *p1, *p2 , *p1 + *p2);

		printf("Ban co muon tiep tuc?y/n: ");
		getchar();
		scanf("%c", &c);
		printf("-------------------------------------------\n");
	} while (c != 110);
	return 0;
}
