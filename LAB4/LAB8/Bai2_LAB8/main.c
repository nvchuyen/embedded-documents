#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	float* arr = malloc(sizeof(float) * n);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap so phan tu thu %d cua mang: ", i + 1);
		scanf("%f", (arr + i));
	}
	printf("=======================================\n");
	for (int i = n-1; i >=0; i--)
	{
		printf("Phan tu thu %d cua mang = %.2f\n", i + 1, *(arr + i));
	}

	free(arr);

	return 0;
}

