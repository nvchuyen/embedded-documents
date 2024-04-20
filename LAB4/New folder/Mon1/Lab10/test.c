#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int strlen1(char* str);
void strcpy1(char* des, char* source);
void concat(char* des, char* str1, char* str2);
void fun(int* p);
int main()
{
	short a = 320;
	char* ptr = NULL;
	ptr = (char*)&a;
	printf("%d", *ptr);
	return 0;
}
void fun(int* p)
{
	int q = 10;
	*p = q;
}
int strlen1(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
void strcpy1(char* des, char* source)
{
	while (*source != '\0')
	{
		*des = *source;
		*des++;
		*source++;
	}
	*des = '\0';
}
void concat(char* des, char* str1, char* str2) 
{
	while (*str1 != '\0')
	{
		*des = *str1;
		des++;
		str1++;
	}
	while (*str2 != '\0')
	{
		*des = *str2;
		des++;
		str2++;
	}
	*des = '\0';
}