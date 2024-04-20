#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int strlen1(char* str);
char* reverse(char* str);
int main()
{
	char c;
	do
	{
		char* str = (char*)malloc(sizeof(char) * 30);
		printf("Xin moi nhap vao chuoi: ");
		fgets(str, 30, stdin);

		char* ptr = strchr(str, '\n');
		if (ptr)
		{
			//if new line found replace with null character
			*ptr = '\0';
		}

		char* rev = reverse(str);

		printf("Chuoi sau khi dao nguoc: %s\n", rev);

		free(str);
		free(rev);

		printf("Ban co muon tiep tuc?y/n: ");
		getchar();
		scanf("%c", &c);
		printf("-------------------------------------------\n");
	} while (c != 110);


	

	return 0;
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
char* reverse(char* str)
{
	int len = strlen1(str)-1;
	char* rev = (char*)malloc(sizeof(char) * (len + 3));
	char* ori = rev;
	while (len >= 0)
	{
		*(rev) = *(str + len);
		len--;
		rev++;
	}
	*(rev) = '\0';
	rev = ori;
	return rev;
}