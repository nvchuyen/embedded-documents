#include<stdio.h>
#include<stdbool.h>
#include <stdlib.h>
int main(int argc, char* argv)
{


    char c;
	int original_number = 65;
	int predict_number;
	do
	{
		int count = 0;
		do
		{
			if (count == 0)
			{
				printf("Xin moi doan: ");
				scanf("%d", &predict_number);
			}
			else
			{
				printf("Ban nhap sai. Xin moi nhap lai: ");
				scanf("%d", &predict_number);
			}
			count++;
		} while (predict_number != original_number);
		printf("Xin chuc mung, ban da doan dung!!\n");
		printf("Ban co muon tiep tuc?y/n: ");
		getchar();
		scanf("%c", &c);
		printf("-------------------------------------------\n");
	} while (c != 110);
	return 0;
}