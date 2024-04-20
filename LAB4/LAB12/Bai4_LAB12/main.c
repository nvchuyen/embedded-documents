#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int findElement(int* arr, int element, int n);
int main()
{
	char c;
	do
	{
		int n = 0;
		int element = 0;
		float* arr = (float*)malloc(sizeof(float) * 30);
		printf("Nhap vao so phan tu cua mang: ");
		scanf("%d", &n);

		for (int i = 0; i < n; i++)
		{
			printf("arr[%d] = ", i);
			scanf("%d", &arr[i]);
		}

		printf("Nhap phan tu can tim: ");
		scanf("%d", &element);

		int ele = findElement(arr, element, n);

		if (ele == 0)
		{
			printf("KHONG tim thay phan tu nay trong mang.\n");
		}
		else
		{
			printf("Tim thay phan tu nay trong mang tai vi tri thu %d.\n", ele);
		}
		printf("Ban co muon tiep tuc?y/n: ");
		getchar();
		scanf("%c", &c);
		printf("-------------------------------------------\n");
		free(arr);
	} while (c != 110);
	return 0;
}
int findElement(int* arr, int element, int n)
{
	for (int i = 0; i < n; i++)
	{
		int k = *(arr + i);
		if (*(arr + i) == element)
		{
			return i + 1;
		}
	}
	return 0;
}
