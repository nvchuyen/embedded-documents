#include<stdio.h>
#include<stdbool.h>


int main()
{
	char c;
	int input;
	do
	{
		printf("Xin moi nhap vao so nguyen: ");
		scanf("%d", &input);
		printf("Cac so chan: \n");
		for (int i = 0; i < input; i++)
		{
			if (i %2 == 0)
			{
				printf("%d\n", i);
			}
		}

		printf("Ban co muon tiep tuc?y/n: ");
		getchar();
		scanf("%c", &c);
		printf("-------------------------------------------\n");
	} while (c != 110);
}
