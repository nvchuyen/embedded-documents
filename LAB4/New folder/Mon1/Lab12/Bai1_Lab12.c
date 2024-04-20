#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct EMPLOYEE
{
	char* name;
	int id;
	int salary;
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
	printf("Nhap vao ID nhan vien: ");
	scanf("%d", &pEm->id);
	
	printf("Nhap vao luong nhan vien: ");
	scanf("%d", &pEm->salary);
	printf("=====================================\n");
	printf("Ten nhan vien: %s\n", pEm->name);
	printf("ID nhan vien: %d\n", pEm->id);
	printf("Ten nhan vien: %d\n", pEm->salary);



	free(pEm->name);
	return 0;
}