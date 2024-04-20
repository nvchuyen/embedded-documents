#include<stdio.h>
#include<stdlib.h>
#define FILENAME "test.txt"
#define MAX 10000
int main()
{
	FILE* fp = NULL;
	fp = fopen(FILENAME, "r");
	char str[MAX];
	char ch;
	int linesCount = 0;
	if (fp != NULL)
	{
		while ((ch = fgetc(fp))!= EOF)
		{
			if (ch == '\n')
				linesCount++;
		}
	}
	printf("Total number of lines are: %d\n", linesCount);
	fclose(fp);
	system("pause");
	return 0;
}
