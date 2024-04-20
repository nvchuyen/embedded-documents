#include<stdio.h>
#include<stdlib.h>

#define ARR_MAX 101
void swap(int* a, int* b);
void SelectionSort(int arr[], int n);
int main()
{
	int n;
	float arr[ARR_MAX];
	char c;
	do
	{
		do
		{
			printf("Xin moi nhap so phan tu: ");
			scanf("%d", &n);
		} while (n <= 0 || n > 101);

		for (int i = 0; i < n; i++)
		{
			printf("Xin moi nhap vao phan tu thu %d: ", i + 1);
			scanf("%f", &arr[i]);
		}

		SelectionSort(arr, n);

		for (int i = 0; i < n; i++)
		{
			printf("Phan tu thu %d: %.2f\n", n-i, arr[n-i]);
		}

		printf("Ban co muon tiep tuc?y/n: ");
		getchar();
		scanf("%c", &c);
		printf("-------------------------------------------\n");
	} while (c != 110);



	return 0;

}

void swap(int* a, int* b) {
    int c = *a;
    *a = *b;
    *b = c;
}
void SelectionSort(int A[], int r)
{
    int temp;
    int m;
    for (int i = 0; i < r; i++)
    {
         m = i;
        for (int j = i + 1; j <= r; j++)
            if (A[j] < A[m]) m = j;

        if (i != m) swap(&A[i], &A[m]);
    }
}
