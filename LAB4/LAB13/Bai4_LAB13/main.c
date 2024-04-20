#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
typedef struct
{
	char* name;
	int age;
	char* address;
	float gpa;
} STUDENT;

STUDENT* Input();
void showInfo(STUDENT* student);
void copyStr(char* des, char* source);
STUDENT* allocateMem(STUDENT* arrSt, int n);
bool checkContain(char* str, char* subStr);
bool checkContain(char* str, char* subStr)
{
	char* p = strstr(str, subStr);
	return p != NULL ? true : false;
}
STUDENT* Input()
{
	STUDENT st;
	STUDENT* pRes = &st;
	pRes->address = (char*)malloc(sizeof(char) * 128);
	pRes->name = (char*)malloc(sizeof(char) * 25);
	printf("Nhap ten: ");
	getchar();
	fgets(pRes->name, 25, stdin);
	for (int i = 0; i < strlen(pRes->name); i++)
	{
		if (*(pRes->name + i) == '\n')
		{
			*(pRes->name + i) = '\0';
			break;
		}
	}

	printf("Nhap dia chi: ");
	fgets(pRes->address, 128, stdin);
	for (int i = 0; i < strlen(pRes->address); i++)
	{
		if (*(pRes->address + i) == '\n')
		{
			*(pRes->address + i) = '\0';
			break;
		}
	}

	printf("Nhap tuoi: "); scanf("%d", &pRes->age);
	printf("Nhap gpa: "); scanf("%f", &pRes->gpa);
	return pRes;
}
void showInfo(STUDENT* student)
{
	printf("Ten: %s\n", student->name);
	printf("Tuoi: %d\n", student->age);
	printf("Dia chi: %s\n", student->address);
	printf("Gpa: %f\n", student->gpa);
}
void freeArr(STUDENT* arrSt, int n)
{
	for (int i = 0; i < n; i++)
	{
		free((arrSt + i)->name);
		free((arrSt + i)->address);
	}
	free(arrSt);
}
void copyStr(char* des, char* source)
{
	while (*source != '\0')
	{
		*des = *source;
		des++;
		source++;
	}
	*des = '\0';
}
STUDENT* allocateMem(STUDENT* arrSt, int n)
{
	arrSt = (STUDENT*)malloc(sizeof(STUDENT) * n);
	for (int i = 0; i < n; i++)
	{
		(arrSt + i)->name = (char*)malloc(sizeof(char) * 30);
		(arrSt + i)->address = (char*)malloc(sizeof(char) * 30);
	}
	return arrSt;
}
int main()
{
	STUDENT* arrSt = NULL;
	int count = 0;
	int num;
	STUDENT* st = NULL;
	int stNum = 0;
	char* find = NULL;
	int dem = 0;
	while (1)
	{
		printf("Hay lua chon: \n");
		printf("1. Nhap thong tin hoc sinh\n");
		printf("2. Tim kiem hoc sinh\n");
		printf("3. Thoat\n");
		scanf("%d", &num);
		switch (num)
		{
		case 1: // nhap thong tin hoc sinh
			if (dem > 0)
			{
				freeArr(arrSt, stNum);
			}
			count = 0;
			printf("Nhap so hoc sinh: "); scanf("%d", &stNum);
			arrSt = allocateMem(arrSt, stNum);
			for (int i = 0; i < stNum; i++)
			{
				printf("Nhap thong tin hoc sinh thu %d\n", i + 1);
				st = Input();
				copyStr((arrSt + count)->name, st->name);
				(arrSt + count)->age = st->age;
				//(arrSt + count)->address = (char*)malloc(sizeof(char) * 128);
				copyStr((arrSt + count)->address, st->address);
				(arrSt + count)->gpa = st->gpa;
				free(st->address);
				free(st->name);
				count++;
				dem++;
				printf("--------------------------------------------\n");
			}
			break;


		case 2: // tim kiem hoc sinh
			getchar();
			printf("Nhap ten hoc sinh can tim: ");
			find = (char*)malloc(sizeof(char) * 20);
			fgets(find, 20, stdin);
			for (int i = 0; i < strlen(find); i++)
			{
				if (*(find + i) == '\n')
				{
					*(find + i) = '\0';
					break;
				}
			}
			for (int i = 0; i < stNum; i++)
			{

				if (checkContain((arrSt + i)->name, find))
				{
					showInfo(arrSt + i);
				}
			}
			free(find);
			break;
		case 3: // thoat

			freeArr(arrSt, stNum);
			return 0;
		default:
			break;
		}


	}
	freeArr(arrSt, stNum);
	return 0;
}
