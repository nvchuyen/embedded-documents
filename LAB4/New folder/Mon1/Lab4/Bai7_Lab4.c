#include<stdio.h>

int main()
{
	float nums[4];
	float res = 0;
	char c;
	do
	{	
		for (int i = 0; i < 4; i++)
		{
			printf("Nhap so thu %d: ", i + 1);
			scanf("%f", &nums[i]);
			res += nums[i];
		}
		res /= 4;
		printf("trung binh cong cua 4 so la: %f\n", res);
		printf("Ban co muon tiep tuc?y/n: ");
		getchar();
		scanf("%c", &c);
		printf("-------------------------------------------\n");
	} while (c != 110);
	return 0;
}