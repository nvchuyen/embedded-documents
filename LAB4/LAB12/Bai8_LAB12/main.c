#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int FindFact(int* f);
int main()
{
	char c;
	do
	{
		int n = 0;
		printf("Nhap vao so can tinh toan: ");
		scanf("%d", &n);

		int res = FindFact(&n);

		printf("%d! = %d\n", n, res);

		printf("Ban co muon tiep tuc?y/n: ");
		getchar();
		scanf("%c", &c);
		printf("-------------------------------------------\n");
	} while (c != 110);
	return 0;
}
int FindFact(int* f)
{
	int res = 1;
	for (int i = 1; i <= *f; i++)
	{
		res *= i;
	}
	return res;
}
