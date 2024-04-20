#include<stdio.h>

int main()
{


	int a, b;
	float result;
	char c;
	do
	{
		printf("Nhap so bi chia: ");
		scanf("%d", &a);
		printf("Nhap so chia: ");
		scanf("%d", &b);

		result = (float)a / (float)b;

		printf("a/b = %.4f\n", result);

		printf("Ban co muon tiep tuc?y/n: ");
		getchar();
		scanf("%c", &c);
		printf("-------------------------------------------\n");
	} while (c != 110);
	return 0;
}