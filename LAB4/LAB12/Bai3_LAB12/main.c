#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
float findMax(float* arr, int n);
int main()
{
	char c;
	do
	{
		int n = 0;
		float* arr = (float*)malloc(sizeof(float) * 30);
		printf("Nhap vao so phan tu cua mang: ");
		scanf("%d", &n);

		for (int i = 0; i < n; i++)
		{
			printf("arr[%d] = ", i);
			scanf("%f", &arr[i]);
		}
		float max = findMax(arr, n);

		printf("so lon nhat trong mang: %.2f\n", max);

		printf("Ban co muon tiep tuc?y/n: ");
		getchar();
		scanf("%c", &c);
		printf("-------------------------------------------\n");
		free(arr);
	} while (c != 110);
	return 0;
}
float findMax(float* arr, int n)
{
	float max = 0;
	for (int i = 0; i < n; i++)
	{
		if (*(arr + i) > max)
			max = *(arr + i);
	}
	return max;
}
