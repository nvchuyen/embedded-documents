#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
void remove1(char* str, char garbage);
void removeChar(char* str);
void remove1(char* str, char garbage) {

	char* src, * dst;
	for (src = dst = str; *src != '\0'; src++) {
		*dst = *src;
		if (*dst != garbage) dst++;
	}
	*dst = '\0';
}
void removeChar(char* str)
{
	char* p = str;
	while (*str != '\0')
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
		{
			remove1(str, *str);
		}
		else
		{
			str++;
		}
	}
}
int main()
{
	char c;
	do
	{
		char* ptr = NULL;
		char* str = (char*)malloc(sizeof(char) * 30);
		printf("Nhap chuoi: ");
		fgets(str, 30, stdin);

		ptr = strchr(str, '\n');
		if (ptr)
		{
			//if new line found replace with null character
			*ptr = '\0';
		}
		removeChar(str);
		printf("chuoi sau khi xoa: %s\n", str);
		printf("Ban co muon tiep tuc?y/n: ");
		getchar();
		scanf("%c", &c);
		printf("-------------------------------------------\n");
		free(str);
	} while (c != 110);


	return 0;
}