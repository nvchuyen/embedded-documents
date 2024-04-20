#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool isEvenNumber(int input)
{
	return (input % 2 == 0) ? true : false;
}

int main()
{
	char c;
	int input;
	bool check;
	do
	{
		printf("Nhap vao so can kiem tra :");
		scanf("%d", &input);
		check = isEvenNumber(input);
		if (check)
		{
			printf("So da nhap la so chan\n");
		}
		else
		{
			printf("So da nhap la so le\n");
		}
		printf("Ban co muon tiep tuc?y/n: ");
		getchar();
		scanf("%c", &c);
		printf("-------------------------------------------\n");
	} while (c != 110);
	return 0;
}
