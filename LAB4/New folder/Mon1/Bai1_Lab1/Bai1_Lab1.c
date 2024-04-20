#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>
#define MAXLENGTHFILE 100

char* strCutc(char* str, char c);

char* strCutc(char* str, char c)
{
	int count = 0;
	char* res = (char*)malloc(sizeof(char) * 10);
	while (*(str) != c)
	{
		*(res + count) = *str;
		str++;
		count++;
	}
	*(res + count) = '\0';
	return res;
}

int fileToStr(char* str)
{
	int status;
	FILE* fp = NULL;

	char* filename = malloc(sizeof(char) * 20);

	printf("Nhap vao file: ");

	scanf("%s", filename);

	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		printf("File khong ton tai");
		return -1;
	}
	status = fread(str, MAXLENGTHFILE, 1, fp);

	char* token;

	/* lay token dau tien */
	token = strtok(str, '\n');

	/* duyet qua cac token con lai */
	while (token != NULL)
	{
		printf(" %s\n", token);

		token = strtok(NULL, '\n');
	}

	printf("He so da thuc P: %s\n", p);

	//end region
	fclose(fp);
	fp = NULL;
	return status;
}


int main()
{
	char* str = (char*)malloc(sizeof(char) * MAXLENGTHFILE);
	fileToStr(str);
	getchar();
	return 0;
}