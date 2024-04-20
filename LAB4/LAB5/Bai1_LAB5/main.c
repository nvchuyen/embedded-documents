#include<stdio.h>
#include<stdbool.h>

int main()
{
	int number;
	int bit =0x0004;
	char c;
	int res;
	do
	{
		printf("Nhap vao so can kiem tra ");
		scanf("%d", &number);
        res = bit & number;
		if (res)
		{
			printf("bit thu 3 cua %d la 1\n", number);
		}
		else
		{
			printf("bit thu 3 cua so %d la 0\n", number);
		}
		printf("Ban co muon tiep tuc?y/n: ");
		getchar();
		scanf("%c", &c);
		printf("------------------------\n");
	}
	while (c != 110);


	return 0;
}
