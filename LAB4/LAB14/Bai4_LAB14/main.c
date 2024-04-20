#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define FILENAME "test.txt"
#define FILENAME1 "test1.txt"
#define FILENAME2 "test2.txt"
#define MAX 10000

int main()
{
	FILE* fp = NULL;
	fp = fopen(FILENAME1, "r");
	char* str = (char*)malloc(200*sizeof(char));
	char* temp = (char*)malloc(100 * sizeof(char));
	int count = 0;
	if (fp != NULL)
	{
		while (fgets(temp, 100, fp))
		{
			if(count == 0)
				strcpy(str, temp);
			else
			{
				strcat(str, temp);
			}
			count++;
		}
	}
	fclose(fp);
	count = 0;
	fp = fopen(FILENAME2, "r");

	if (fp != NULL)
	{
		while (fgets(temp, 200, fp))
		{
			strcat(str, temp);
		}
	}

	printf("%s", str);

	fclose(fp);

	fp = fopen(FILENAME, "w");

	fprintf(fp, str);

	fclose(fp);
	free(str);
	free(temp);
	system("pause");
	return 0;
}
