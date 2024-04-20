#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

int main()
{
	char c;
	do
	{
		char* ptr = NULL;
		char* str = (char*)malloc(sizeof(char) * 30);
		char* search = (char*)malloc(sizeof(char) * 30);
		printf("Nhap chuoi cha : ");
		fgets(str, 30, stdin);
		ptr = strchr(str, '\n');
		if (ptr)
		{
			//if new line found replace with null character
			*ptr = '\0';
		}


		printf("Nhap chuoi con: ");
		fgets(search, 30, stdin);
		ptr = strchr(search, '\n');
		if (ptr)
		{
			//if new line found replace with null character
			*ptr = '\0';
		}
        // tim chuoi con trong chuoi cha
		char* res = strstr(str, search);

		if (res != NULL)
		{
			printf("Ton tai chuoi - %s - trong chuoi - %s -\n", search, str);
		}
		else
		{
			printf("KHONG ton tai chuoi - %s - trong chuoi - %s -\n", search, str);
		}
		printf("Ban co muon tiep tuc?y/n: ");
		getchar();
		scanf("%c", &c);
		printf("-------------------------------------------\n");
		free(str);
		free(search);
	} while (c != 110);


	return 0;
}
