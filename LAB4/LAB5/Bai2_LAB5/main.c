#include <stdio.h>
int main()
{
	int number;
	int res;
	char c;
	do
	{
		printf("Nhap vao so can chuyen doi ");
		scanf("%d", &number);

        res = number | (1<<4);
		printf("So %d sau khi chuyen la %d\n", number, res);
		printf("Ban co muon tiep tuc?y/n: ");
		getchar();
		scanf("%c", &c);
		printf("-------------------------------------------\n");
	} while (c != 110);
	return 0;
}
