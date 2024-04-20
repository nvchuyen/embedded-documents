#include<stdio.h>
#include<stdbool.h>

int main()
{
	int number;
	int bit;
	char c;
	do
	{
		printf("Nhap vao so can kiem tra ");
		scanf("%d", &number);

		printf("Nhap vao bit can kiem tra ");
		scanf("%d", &bit);

		bool res = CheckBit(number, bit);

		if (res)
		{
			printf("bit thu %d cua %d la 1\n", bit, number);
		}
		else
		{
			printf("bit thu %d cua so %d la 0\n", bit, number);
		}
		printf("Ban co muon tiep tuc?y/n: ");
		getchar();
		scanf("%c", &c);		
		printf("-------------------------------------------\n");
	} 
	while (c != 110);

	/*char c[100];
	fgets(c, 100, stdin);
	printf("%s", c);*/

	return 0;
}
