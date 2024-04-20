#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
void sortStr(char** pStr, int n);
int main()
{
	char str[25][25];
	char temp[25];
	int n;
	printf("Nhap vao so chuoi can nhap: ");
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++)
	{	
		printf("Nhap vao chuoi thu %d :", i + 1);
		fgets(str[i], 25, stdin);
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= n-i; j++)
		{
			if (strcmp(str[j], str[j + 1]) > 0)
			{
				strcpy(temp, str[j]);
				strcpy(str[j], str[j+1]);
				strcpy(str[j + 1], temp);
			}
		}
	}


	printf("Chuoi sau khi sap xep la: ");
	for (int i = 0; i < n; i++)
	{
		printf("%s", str[i]);
	}
	return 0;
}
void display2D(char** arr)
{

}
/// <summary>
/// 
/// </summary>
/// <param name="pStr">Mảng 2 chiều chứa các string</param>
/// <param name="n">số lượng string</param>
void sortStr(char* pStr[25], int n)
{
	char* temp = (char*)malloc(sizeof(char)*25);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= n - i; j++)
		{
			if (strcmp(pStr[j], pStr[j + 1]) > 0)
			{
				strcpy(temp, pStr[j]);
				strcpy(pStr[j], pStr[j + 1]);
				strcpy(pStr[j + 1], temp);
			}
		}
	}
	free(temp);
}