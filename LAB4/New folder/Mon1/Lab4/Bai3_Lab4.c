#include<stdio.h>

int main()
{
	int inputDay;
	int year;
	int week;
	int day;
	char c;
	do
	{
		printf("Nhap vao so ngay: ");
		scanf("%d", &inputDay);

		year = inputDay / 365;

		week = (inputDay - 365 * year)/7;

		day = inputDay - 365 * year - week * 7;

		printf("%d ngay tuong ung voi %d nam, %d tuan, %d ngay\n",inputDay, year, week, day);

		printf("Ban co muon tiep tuc?y/n: ");
		getchar();
		scanf("%c", &c);
		printf("-------------------------------------------\n");
	} while (c != 110);
	return 0;
}