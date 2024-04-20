#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct DATEOFBIRTH
{
	int day;
	int month;
	int year;
};
struct EMPLOYEE
{
	char* name;
	int id;
	int salary;
	struct DATEOFBIRTH* dateOfBirth;
};

int main()
{
	struct EMPLOYEE em;
	struct EMPLOYEE* pEm = &em;
	pEm->name = (char*)malloc(30 * sizeof(char));
	printf("Nhap vao ten nhan vien: ");
	fgets(pEm->name, 30, stdin);
	for (int i = 0; i < strlen(pEm->name); i++)
	{
		if (*(pEm->name + i) == '\n')
			*(pEm->name + i) = '\0';
	}
	struct DATEOFBIRTH d;
	pEm->dateOfBirth = &d;
	printf("Nhap vao Ngay sinh nhan vien: \n");
	printf("Ngay: "); scanf("%d", &pEm->dateOfBirth->day);
	printf("Thang: "); scanf("%d", &pEm->dateOfBirth->month);
	printf("Nam: "); scanf("%d", &pEm->dateOfBirth->year);

	printf("Nhap vao ID nhan vien: ");
	scanf("%d", &pEm->id);

	printf("Nhap vao luong nhan vien: ");
	scanf("%d", &pEm->salary);


	printf("=====================================\n");
	printf("Ten nhan vien: %s\n", pEm->name);
	printf("ID nhan vien: %d\n", pEm->id);
	printf("Ngay thang nam sinh nhan vien: %d/%d/%d \n", pEm->dateOfBirth->day, pEm->dateOfBirth->month, pEm->dateOfBirth->year);
	printf("Ten nhan vien: %d\n", pEm->salary);

	free(pEm->name);
	return 0;
}