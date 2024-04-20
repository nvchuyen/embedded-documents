#include<stdio.h>
#define YEARS 5
#define MONTH 12
int main()
{
	float rain[YEARS][MONTH] =
	{
		{4.3, 4.3, 1.4, 6.5, 5.7, 3.3, 2.1, 4.2, 6.0, 0.3, 0.4,7.9},
		{4.3, 6.7, 1.6, 6.5, 5.9, 3.5, 2.1, 4.2, 6.0, 0.0, 0.4,12.0},
		{4.3, 4.3, 1.7, 6.5, 5.7, 3.3, 2.1, 4.2, 6.0, 0.1, 0.4,11.2},
		{4.3, 4.3, 8.4, 6.5, 6.3, 2.9, 2.1, 4.9, 6.0, 0.2, 0.2,10},
		{4.3, 4.3, 1.4, 6.5, 5.7, 3.3, 2.1, 4.2, 6.0, 0.5, 0.4,12.3},
	};
	printf("Luong mua cac thang trong cac nam\n");
	int year, total, month;
	float subtot;
	for (year = 0, total = 0; year < YEARS; year++)
	{
		for (month = 0, subtot = 0; month < MONTH; month++)
		{
			subtot += rain[year][month];
		}
		printf("%5d \t%15.1f\n", 2010 + year, subtot);
		total += subtot;
	}
	printf("Luong mua trung binh cac thang\n");
	for (month = 0; month < MONTH; month++)
	{
		for (year = 0, subtot = 0; year < YEARS; year++)
		{
			subtot += rain[year][month];
		}
		printf("%4.1f\n", subtot / YEARS);
	}
	return 0;
}