#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
void swabArr(int* arr1, int n1, int* arr2, int n2);
void swap(int* a, int* b);
int main()
{
	char c;
	do
	{
		int n1 = 0;
		int n2 = 0;
		int* arr1 = (int*)malloc(30 * (sizeof(int)));
		int* arr2 = (int*)malloc(30 * (sizeof(int)));
		printf("Nhap vao so phan tu cua mang arr1: ");
		scanf("%d", &n1);
		for (int i = 0; i < n1; i++)
		{
			printf("arr1[%d] = ", i);
			scanf("%d", &arr1[i]);
		}
		
		printf("Nhap vao so phan tu cua mang arr2: ");
		scanf("%d", &n2);
		arr2 = (int*)realloc(arr2, n2 * (sizeof(int)));
		for (int i = 0; i < n2; i++)
		{
			printf("arr2[%d] = ", i);
			scanf("%d", &arr2[i]);
		}
		
		swabArr(arr1, n1, arr2, n2);
		int a = 0;
		printf("Mang sau khi doi cho: \n");
		for (int i = 0; i < n1; i++)
		{
			printf("arr1[%d] = %d\t", i, arr1[i]);
		}
		printf("\n");
		for (int i = 0; i < n2; i++)
		{
			printf("arr2[%d] = %d\t", i, arr2[i]);
		}
		printf("\n");
		printf("Ban co muon tiep tuc?y/n: ");
		getchar();
		scanf("%c", &c);
		printf("-------------------------------------------\n");
		free(arr1);
		free(arr2);
	} while (c != 110);
	return 0;
}
void swabArr(int* arr1,int n1, int* arr2, int n2)
{
	if (n1 > n2)
	{
		for (int i = 0; i < n2; i++)
		{
			swap((arr1 + i), (arr2 + i));
		}
	}
	else
	{
		for (int i = 0; i < n1; i++)
		{
			swap((arr1 + i), (arr2 + i));
		}
	}
}
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}