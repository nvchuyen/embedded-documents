#include<stdio.h>
#include<stdlib.h>
#define FILENAME "C://Users//admin//Desktop//test.txt"
#define MAX 10000
int main()
{
	FILE* fp = NULL;
	fp = fopen(FILENAME, "r");
	char str[MAX];
	char ch;
	int count = 0;
	if (fp != NULL)
	{
		while ((ch = fgetc(fp))!= EOF)
		{
			if (ch == '\n')
				count++;
		}
	}
	printf("So dong cua file = %d\n", count);
	fclose(fp);
	system("pause");
	return 0;
}