#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int strlen(char* str);
void strcat(char* destination, char* concatStr);
bool strcmp(char* str1, char* str2);
int main()
{
	char* arr1 = (char*)malloc(sizeof(char) * 30);
	char* arr2 = (char*)malloc(sizeof(char) * 30);
	printf("chuoi1: ");
	fgets(arr1, 30, stdin);
	printf("chuoi2: ");
	fgets(arr2, 30, stdin);

	int count1 = strlen(arr1);
	int count2 = strlen(arr2);

	printf("do dai chuoi 1: %d \n", count1);
	printf("do dai chuoi 2: %d \n", count2);
	// so sanh 2 chuoi voi nhau
	bool cmp = strcmp(arr1, arr2);
	if (cmp)
	{
		printf("Hai chuoi nhap vao GIONG nhau\n");
	}
	else
	{
		printf("Hai chuoi nhap vao KHAC nhau\n");
	}
    strcat(arr1, arr2);

	printf("chuoi sau khi da noi: %s\n", arr1);
	free(arr1);
	free(arr2);
	return 0;
}
int strlen(char* str)
{
	int count = 0;
	while (*str != '\0' && *str != '\n')
	{
		count++;
		str++;
	}
	return count;
}
void strcat(char* destination, char* concatStr)
{
	int count = 0;
	while (*destination != '\0')
	{
		if (*destination == '\n')
		{
			*destination = '\0';
		}
		else
		{
			count++;
			destination++;
		}
	}
	while (*concatStr != '\0')
	{
		if (*concatStr == '\n')
		{
			*concatStr = '\0';
		}
		else
		{
			*destination = *concatStr;
			destination++;
			concatStr++;
		}
	}
	*destination = '\0';
}
bool strcmp(char* str1, char* str2)
{
	while (*str1 != '\0')
	{
		if (*str1 != *str2)
		{
			return false;
		}
		str1++;
		str2++;
	}
	if (*str2 != '\0')
	{
		return false;
	}
	else
	{
		return true;
	}
}
