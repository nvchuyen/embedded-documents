#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool strcmp(char* str1, char* str2);
int main()
{
	char c;
	do
	{
		char* str1 = (char*)malloc(sizeof(char) * 30);
		char* str2 = (char*)malloc(sizeof(char) * 30);

		printf("str1: ");
		fgets(str1, 30, stdin);

		printf("str2: ");
		fgets(str2, 30, stdin);

		bool cmp = strcmp(str1, str2);

		if (cmp)
		{
			printf("2 chuoi GIONG nhau\n");
		}
		else
		{
			printf("2 chuoi KHAC nhau\n");
		}
		printf("Ban co muon tiep tuc?y/n: ");
		getchar();
		scanf("%c", &c);
		printf("-------------------------------------------\n");
		free(str1);
		free(str2);
	} while (c != 110);
	return 0;
}
bool strcmp(char* str1, char* str2)
{
	while (*str1 != '\0' && *str2 != '\0')
	{
		if (*str1 != *str2)
			return false;
		str1++;
		str2++;
	}
	return true;
}
