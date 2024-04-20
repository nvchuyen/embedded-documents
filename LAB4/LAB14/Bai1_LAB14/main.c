#include<stdio.h>
#include<stdlib.h>
#define FILENAME "test.txt"
int main()
{
	FILE* fp = NULL;

	fp = fopen(FILENAME, "w");

	char* arr = (char*)malloc(sizeof(char) * 30);

	fgets(arr, 30, stdin);

	fprintf(fp, arr);

	fclose(fp);
	free(arr);
	return 0;
}
