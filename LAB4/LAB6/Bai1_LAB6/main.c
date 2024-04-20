#include<stdio.h>
#include<math.h>
#include<stdbool.h>
_Bool isInteger(float input)
{
	return input == (int)input ? true : false;
}
int compare(int a, int b)
{
	int result = a - b;
	if (result > 0)
	{
		return 1;
	}
	else
	{
		if (result == 0)
		{
			return 0;
		}
		else
		{
			return -1;
		}
	}

}
int main()
{
	float a, b;
	int res;
	char c;
	do
	{
		printf("Nhap vao so thu nhat: ");
		scanf("%f", &a);

		printf("Nhap vao so thu hai: ");
		scanf("%f", &b);

		if (isInteger(a) && isInteger(b))
		{
			res = compare(a, b);
			switch (res)
			{
			case 1:
				printf("So thu nhat lon hon so thu hai!!\n");
				break;
			case 0:
				printf("So thu nhat bang so thu hai!!\n");
				break;
			case -1:
				printf("So thu nhat nho hon so thu hai!!\n");
				break;
			default:
				break;
			}
		}
		else
		{
			printf("So ban nhap vao khong phai la so nguyen\n");
		}
		printf("Ban co muon tiep tuc?y/n: ");
		getchar();
		scanf("%c", &c);
		printf("-------------------------------------------\n");
	} while (c != 110);
	return 0;
}
