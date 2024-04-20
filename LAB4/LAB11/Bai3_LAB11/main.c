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

		if (*p1 > *p2)
		{
			printf("So %d lon nhat trong 2 so\n", *p1);
		}
		else
		{
			if (*p1 < *p2)
			{
				printf("So %d lon nhat trong 2 so\n", *p2);
			}
			else
			{
				printf("2 so bang nhau\n");
			}
		}
		printf("Ban co muon tiep tuc?y/n: ");
		getchar();
		scanf("%c", &c);
		printf("-------------------------------------------\n");
	} while (c != 110);
	return 0;
}
