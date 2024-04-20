#include<stdio.h>
#include<stdlib.h>
#define FILENAME "C://Users//admin//Desktop//test.txt"
#define MAX 10000
int main()
{
	FILE* fp = NULL;
	fp = fopen(FILENAME, "r");
	char str[MAX];
	if (fp != NULL)
	{
		while (fgets(str, MAX, fp))
		{
			printf("%s", str);
		}
	}

	fclose(fp);

	return 0;
}