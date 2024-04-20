#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define FILENAME "C://Users//admin//Desktop//test.txt"
#define FILENAME1 "C://Users//admin//Desktop//test1.txt"
int main()
{
	/*FILE* fp = NULL;
	FILE* fp1 = NULL;
	char ch;
	fp1 = fopen(FILENAME1, "w");
	if (fp1 == NULL)
	{
		printf("File does not exist. \n");
		return -1;
	}
	fp = fopen(FILENAME, "r");
	if (fp == NULL)
	{
		printf("File does not exist. \n");
		return -1;
	}
	while ((ch = fgetc(fp)) != EOF)
	{
		if (islower(ch))
		{
			ch = ch - 32;
		}
		fputc(ch, fp1);
	}
	fclose(fp);
	fclose(fp1);

	remove(FILENAME);
	rename(FILENAME1, FILENAME);*/

	FILE* fp = NULL;

	fp = fopen(FILENAME, "r");

	int i = 0;
	long cnt = 0;

	if (fp == NULL)
	{
		printf("File does not exist. \n");
		return -1;
	}

	fseek(fp, 0, SEEK_END);

	cnt = ftell(fp);

	while (i < cnt)
	{
		i++;
		fseek(fp, -i, SEEK_END);
		printf("%c", fgetc(fp));
	}

	fclose(fp);

	system("pause");

	return 0;
}