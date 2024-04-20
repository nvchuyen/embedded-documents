#include<stdio.h>
#include<stdlib.h>

#define ARR_MAX 101
void swap(int* a, int* b);
void heapify(int arr[], int n, int i);
void sort_heap(int arr[], int n);
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

		sort_heap(arr, n);

		for (int i = 0; i < n; i++)
		{
			printf("Phan tu thu %d: %.2f\n", i + 1, arr[i]);
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

void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && arr[left] > arr[largest])
        largest = left;
    if (right < n && arr[right] > arr[largest])
        largest = right;
    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}

void sort_heap(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    for (int i = n - 1; i >= 0; i--) {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}