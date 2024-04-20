#include<stdio.h>
#include<math.h>
int main()
{
	int nums[4];
	int res;
	char c;
	do
	{
		for (int i = 0; i < 4; i++)
		{
			res = 0;
			printf("Nhap so thu %d: ", i + 1);
			scanf("%d", &nums[i]);
			res = pow(nums[i], 2);
			printf("%d ^ 2 = %d\n", nums[i], res);
		}
		printf("Ban co muon tiep tuc?y/n: ");
		getchar();
		scanf("%c", &c);
		printf("-------------------------------------------\n");
	} while (c != 110);
	return 0;
}