#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>

void Input(void);
int* souoc(int n);

void Input(void)
{
	int n;
	printf("Nhap vao so nguyen duong N: ");
	scanf("%d", &n);
	if (n <= 0)
	{
		printf("ERROR");
		return;
	}
	int arr[100];
	int count = 0;
	for (int i = 1; i <= n/2; i++)
	{
		if ((n % i) == 0)
		{
			arr[count] = i;
			count++;
		}
	}
	arr[count] = -1;
	count = 0;

	int count1 = 0;

	while (arr[count] != -1)
	{
		count++;
		if (arr[count] % 2 == 0)
		{
			count++;
			if (arr[count] % 3 == 0 && (arr[count] % 5) != 0)
			{
				count1 += arr[count];
			}
		}
	}
	printf("So cac uoc %d\n", count);
	printf("Tong cac uoc thoa man dk %d\n", count1);
}



int main(void)
{
	Input();

	return 0;
}