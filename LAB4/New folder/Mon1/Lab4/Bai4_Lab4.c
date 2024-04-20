#include<stdio.h>

int main()
{
	int inputMinute;
	float year;
	float day;
	char c;
	do
	{
		printf("Nhap vao so phut: ");
		scanf("%d", &inputMinute);

		day = inputMinute / (60 * 24);

		year = day / 365;


		printf("%d phut tuong ung voi %.2f ngay, %.2f nam\n", inputMinute, day, year);

		printf("Ban co muon tiep tuc?y/n: ");
		getchar();
		scanf("%c", &c);
		printf("-------------------------------------------\n");
	} while (c != 110);
	return 0;
}