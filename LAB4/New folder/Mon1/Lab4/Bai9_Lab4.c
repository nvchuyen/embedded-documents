#include<stdio.h>
#include<math.h>
int main()
{
	unsigned int id;
	unsigned int hour;
	unsigned int salary_perhour;
	unsigned int total_salary;
	char c;
	do
	{
		printf("Nhap id nhan vien: ");
		scanf("%u", &id);

		printf("Nhap so gio lam viec: ");
		scanf("%u", &hour);

		printf("Nhap luong moi gio: ");
		scanf("%u", &salary_perhour);

		total_salary = hour * salary_perhour;

		printf("Tien luong hang thang: %u\n", total_salary);

		printf("Ban co muon tiep tuc?y/n: ");
		getchar();
		scanf("%c", &c);
		printf("-------------------------------------------\n");
	} while (c != 110);
	return 0;
}