#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

int main()
{
	char str[25][25];
	char temp[25];
	int n;
	// buoc  2: yeu cau nhap vao so luong chuoi ky tu
	printf("Nhap vao so chuoi can nhap: ");
	scanf("%d", &n);
	getchar();
    // buoi 3: nhap chuoi ky tu dung vong for
	for (int i = 0; i < n; i++)
	{
		printf("Nhap vao chuoi thu %d :", i + 1);
		fgets(str[i], 25, stdin);
	}
    // buoc 4: dung vong for de sap xep thu tu cac chuoi da nhap
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= n-i; j++)
		{
			if (strcmp(str[j], str[j + 1]) > 0)
			{
				strcpy(temp, str[j]);
				strcpy(str[j], str[j+1]);
				strcpy(str[j + 1], temp);
			}
		}
	}

	printf("Chuoi sau khi sap xep la: ");
	for (int i = 0; i < n; i++)
	{
		printf("%s", str[i]);
	}
	return 0;
}
