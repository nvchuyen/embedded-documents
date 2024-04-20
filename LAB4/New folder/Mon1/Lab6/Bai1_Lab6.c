#include<stdio.h>
#include<stdbool.h>

bool isEvenNumber(int input)
{
	return (input % 2 == 0) ? true : false;
}
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
			if (isEvenNumber(i))
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